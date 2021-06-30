//taking input from user level wise
//tree input 
//with the help of queue

#include<iostream>
#include<queue>
#include "treeNodeClassTemplate.h"

using namespace std;

TreeNode<int> * takeInputLevelWise( )
{
    int rootData;
    cout << "Enter root Data : ";
    cin >> rootData;
    TreeNode <int> *root = new TreeNode<int>(rootData);   //creating the node

    queue <TreeNode<int> *> pendingNodes;   //creating queue to store nodes level wise

    pendingNodes.push(root);         

    while(pendingNodes.size() != 0)
    {
        TreeNode<int> *front = pendingNodes.front();
        pendingNodes.pop();
        cout << "Enter no of children of " << front -> data << " : ";
        int numChild;
        cin >> numChild;

        for(int i = 0; i < numChild; i++)
        {
            int childData;
            cout << "Enter " << i << "th child data of " << front -> data << " : ";
            cin >> childData;
            TreeNode <int> *child = new TreeNode<int> (childData);
            front -> children.push_back(child);     //adding children node to vector of parent 
            pendingNodes.push(child);           //also adding this node to the queue

        }
    }
    return root;
}

//print the tree using recursion
void printTree(TreeNode <int> *root)
{
    //edge case 
    if(root == NULL)
    {
        return;   //if tree is empty
    }
    //print the root and all its children
    cout << root->data << " : ";    //printing the data of root
    //printing all the childrens of root
    for(int j = 0; j < root -> children.size(); j++)
    {
        cout << root -> children[j] -> data << ",";
    }
    cout << endl;

    //recursive call for each children of root
    for(int i = 0; i < root->children.size(); i++)
    {
        printTree(root -> children[i]);   
    }

    //above base case is not needed as single node acts as base case
}

int main()
{
    TreeNode<int> *root = takeInputLevelWise();    //taking the input tree
    printTree(root);   //print the tree
}
