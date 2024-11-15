#include "Tree.h"
#include "Bounty.h"
#include <iostream>
#include <fstream>

using namespace std;

// Constructor
Tree::Tree() : root(nullptr) {}
TreeNode::TreeNode(const Bounty& b)
    : data(b), left(nullptr), right(nullptr) {
    
}

// Destructor
Tree::~Tree() {
    deleteTree(root); // Call to delete the entire tree
}

// Function to delete the tree recursively
void Tree::deleteTree(TreeNode* node) {
    if (node) {
        deleteTree(node->left);
        deleteTree(node->right);
        delete node;
    }
}

// Insert a bounty into the tree
void Tree::insert(TreeNode*& node, const Bounty& bounty) {
    if (node == nullptr) {
        node = new TreeNode(bounty); // Create a new node if the position is empty
    } else if (bounty < node->data) {
        insert(node->left, bounty); // Recur left
    } else {
        insert(node->right, bounty); // Recur right
    }
}

// Public insert method
void Tree::insert(const Bounty& bounty) {
    insert(root, bounty); // Start insertion from the root
}

// In-order traversal to display bounties
void Tree::inOrder(TreeNode* node) const {
    if (node) {
        inOrder(node->left); // Recur left
        cout << node->data << endl; // Display the data
        inOrder(node->right); // Recur right
    }
}

// Public method to display the tree
void Tree::displayInOrder() const {
    inOrder(root); // Start in-order traversal from the root
}

// Search for a bounty by name
TreeNode* Tree::search(TreeNode* node, const string& name) const {
    if (node == nullptr) {
        return nullptr; // Return false if the tree is empty
    }

    // Check if the current node matches the search name
    if (node->data.getName() == name) {
        return node; // Found the bounty
    }

    // Recur left orright based on comparison
    if (name < node->data.getName()) {
        return search(node->left, name); // Search in the left subtree
    } else {
        return search(node->right, name); // Search in the right subtree
    }
}

// Public method to initiate search
TreeNode* Tree::search(const string& name) const {
    return search(root, name); // Start search from the root
}

// Load bounties from a text file
void Tree::loadFromFile(const string& filename) {
    ifstream file(filename);
    if (!file.is_open()) {
        cerr << "Error opening file: " << filename << endl;
        return; // Exit if the file cannot be opened
    }

    string name;
    int age;
    string eyeColor;
    string build;
    string city; 
    string bodyMark;

    // Read data from the file
    while (getline(file, name)) {
        file >> age;
        file.ignore(); // Ignore new line after age
        getline(file, eyeColor);
        getline(file, build);
        getline(file,bodyMark);
        getline(file,city);
        
        Bounty bounty(name, age, eyeColor, build,city, bodyMark); // Create a Bounty object
        insert(bounty); // Insert the bounty into the tree
    }
    file.close(); // Close the file after reading
}

// Save bounties to a text file
void Tree::saveToFile(TreeNode* node, ofstream& file) const {
    if (node) {
        saveToFile(node->left, file); // Recur left
        file << node->data.getName() << endl; // Save the bounty name
        file << node->data.getAge() << endl; // Save age
        file << node->data.getEyeColor() << endl; // Save eye color
        file << node->data.getBuild() << endl; // Save build
        file << node->data.getBodyMark()<< endl; // Save body mark
        file << node->data.getCity()<< endl; //Save city
        saveToFile(node->right, file); // Recur right
    }
}

// Public method to save bounties to a file
void Tree::saveToFile(const string& filename) const {
    ofstream file(filename);
    if (!file.is_open()) {
        cerr << "Error opening file for writing: " << filename << endl;
        return; // Exit if the file cannot beopened
    }

    saveToFile(root, file); // Start saving from the root
    file.close(); // Close the file after writing
}
