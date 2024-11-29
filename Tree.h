#ifndef TREE_H
#define TREE_H

#include <string>
#include <fstream>
#include "Bounty.h"

using namespace std;

struct TreeNode {
    Bounty data;          // The bounty data
    TreeNode* left;      // Pointer to the left child
    TreeNode* right;     // Pointer to the right child

    // Constructor
    TreeNode(const Bounty& b);
};

class Tree {
private:
    TreeNode* root;      // Root of the tree

    // Private helper functions
    void deleteTree(TreeNode* node);
    void insert(TreeNode*& node, const Bounty& bounty);
    void inOrder(TreeNode* node) const;
    TreeNode* search(TreeNode* node, const string& name) const;  // Change to return TreeNode*
    void saveToFile(TreeNode* node, ofstream& file) const;

public:
    // Constructor and Destructor
    Tree();
    ~Tree();
    // Public methods
    void insert(const Bounty& bounty);
    void displayInOrder() const;
    TreeNode* search(const string& name) const;  // Change to return TreeNode*
    void loadFromFile(const string& filename);
    void saveToFile(const string& filename) const;
};

#endif // TREE_H


