//take input nodes data from user
//this takes input in depth wise
//main function for treeNodeClassTemplate.h

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

//take input tree from user
//here input is taken depth wise

TreeNode<int>* takeInput()
{
    int rootData;
    cout << "Enter Data : ";
    cin >> rootData;
    
    TreeNode<int> *root = new TreeNode<int>(rootData);     //creating new tree node
    cout << "Enter num of children of " << rootData << ": ";    //asking for children of root
    int n;
    cin >> n;

    for(int i = 0; i < n; i++)        //for each child
    {
        TreeNode<int> * child = takeInput();  //again recursive call to take input 
        root -> children.push_back(child);    //and connecting the child to the root
    }

    return root; 

}

int main()
{
    TreeNode<int> *root = takeInput();    //taking the input tree
    printTree(root);   //print the tree
}

