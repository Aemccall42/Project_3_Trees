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




/*
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
    bool search(TreeNode* node, const string& name) const;
    void saveToFile(TreeNode* node, ofstream& file) const;

public:
    // Constructor and Destructor
    Tree();
    ~Tree();

    // Public methods
    void insert(const Bounty& bounty);
    void displayInOrder() const;
    bool search(const string& name) const;
    void loadFromFile(const string& filename);
     void saveToFile(const string& filename) const;
};

#endif // TREE_H
*/



/*#ifndef TREE_H
#define TREE_H

#include "Bounty.h"

using namespace std;

class TreeNode {
public:
    Bounty data;           // Data stored in the node
    TreeNode* left;       // Pointer to the left child
    TreeNode* right;      // Pointer to the right child

    TreeNode(const Bounty& bounty) : data(bounty), left(nullptr), right(nullptr) {}
};

class Tree {
private:
    TreeNode* root;       // Root of the tree

    void insert(TreeNode*& node, const Bounty& bounty);
        void inorder(TreeNode* node) const;      // Helper for in-order traversal
    void deleteTree(TreeNode* node);         // Helper for deleting the tree
    TreeNode* search(TreeNode* node, const string& name) const; // Search for a bounty by name

public:
    // Constructor
    Tree();

    // Destructor
    ~Tree();

    // Public methods
    void insert(const Bounty& bounty);
    void displayInOrder() const;
    TreeNode* search(const string& name);
};

// Define BST operations and helper functions further

#endif // TREE_H */














/*
#ifndef TREE_H
#define TREE_H

#include "Bounty.h"
#include <iostream>
using namespace std;

class Tree
{
    private:
        struct TreeNode
        {
            Bounty value;
            TreeNode* left;
            TreeNode* right;
        };

        TreeNode *root;
        int numNodes;

        void insert(TreeNode *&, TreeNode *&);
        void destroySubTree(TreeNode *);
        void deleteNode(Bounty, TreeNode *&);
        void makeDeletion(TreeNode *&);
        void saveToFile(TreeNode *) const;
        void fullDisplayInOrder(TreeNode *) const;
        void displayInOrder(TreeNode *) const;
        void displayPreOrder(TreeNode *) const;
		void displayPostOrder(TreeNode *) const;

    public:
        //Constructor
        Tree()
        {
            root = NULL;
        }

        //Destructor
        ~Tree()
        {
            destroySubTree(root);
        }

        //tree ops
        void insertNode(Bounty);
        bool searchNode(Bounty);
        void remove(Bounty);

        
		void saveToFile() const
		{  
			saveToFile(root); 
		}

		void fullDisplayInOrder() const
		{  
			fullDisplayInOrder(root); 
		}
		
		void displayInOrder() const
		{  
			displayInOrder(root); 
		}

		void displayPreOrder() const
		{  
			displayPreOrder(root); 
		}

		void displayPostOrder() const
		{  
			displayPostOrder(root); 
		}
		
		int getNumNodes() const
		{
			return numNodes;
		}

        Bounty getRootBounty() const
        {
            return root->value;
        }

};

void Tree::insert(TreeNode *&nodePtr, TreeNode *&newNode) //insert node and search branches
{
    if(nodePtr == NULL)
    {
        nodePtr = newNode;
    }
    else if(newNode->value.getName()<nodePtr->value.getName())
    {
        insert(nodePtr->left, newNode);
    }
    else
    {
        insert(nodePtr->right, newNode);
    }
}

void Tree::insertNode(Bounty newBounty)
{
    TreeNode *newNode = NULL;

    if(this->searchNode(newBounty))
    {
        cout << "This bounty has already been added.";
    }
    else
    {
        newNode =new TreeNode;
    }
}


//left off here



#endif
*/