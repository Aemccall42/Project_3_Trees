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
/*
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
*/


#endif