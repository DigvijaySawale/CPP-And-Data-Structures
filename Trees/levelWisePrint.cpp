//print tree nodes levelwise
//with the help of queue

#include<iostream>
#include<queue>
#include "treeNodeClassTemplate.h"

using namespace std;

//print the tree using recursion
void printTree(TreeNode <int> *root)
{
    if(root == NULL)
        return ;

    queue <TreeNode<int>*> nds;    //creating queue to store tree nodes 
    nds.push(root);        //pushing root to queue
    while(nds.size() != 0)
    {
        TreeNode<int> *front = nds.front();  //creating new node to store current node
        nds.pop();
        cout << front->data << " " ;
        for(int i = 0; i < front -> children.size(); i++)
        {
            nds.push(front->children[i]);   //pushing all children of parent in the queue
        }
    }
 
}

//input function which takes input level wise
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

int main()
{
    TreeNode<int> *root = takeInputLevelWise();    //taking the input tree
    printTree(root);   //print the tree
}
