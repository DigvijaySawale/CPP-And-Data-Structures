//printing the tree
//this program will print a node and the all of its children and then recursively do same with all of its children 
//main for template class tree nodes

#include<iostream>
using namespace std;
#include "treeNodeClassTemplate.h"

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
	//making simple tree of integers
    TreeNode<int> *root = new TreeNode<int> (10);    //creating the root node 
    TreeNode<int> *node1 = new TreeNode<int> (20);
    TreeNode<int> *node2 = new TreeNode<int> (30);

    //connecting the root to its children
    root -> children.push_back(node1);
    root -> children.push_back(node2);
    
    printTree(root);

}
