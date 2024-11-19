#ifndef TREE_H
#define TREE_H

#include "Bounty.h"
#include <iostream>
using namespace std;

class Tree
{
    private:
        struct treeNode
        {
            Bounty value;
            treeNode* left;
            treeNode* right;
        };

        treeNode *root;
        int numNodes;

        void insert(treeNode *&, treeNode *&);
        void destroySubTree(treeNode *);
        void deleteNode(Bounty, treeNode *&);
        void makeDeletion(treeNode *&);
        void saveToFile(treeNode *) const;
        void fullDisplayInOrder(treeNode *) const;
        void displayInOrder(treeNode *) const;
        void displayPreOrder(treeNode *) const;
		void displayPostOrder(treeNode *) const;

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

void Tree::insert(treeNode *&nodePtr, treeNode *&newNode) //insert node and search branches
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
    treeNode *newNode = NULL;

    if(this->searchNode(newBounty))
    {
        cout << "This bounty has already been added.";
    }
    else
    {
        newNode =new treeNode;
    }
}


//left off here



#endif