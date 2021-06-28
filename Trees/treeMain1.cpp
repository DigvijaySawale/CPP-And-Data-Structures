//main for template class tree nodes

#include<iostream>
using namespace std;
#include "treeNodeClassTemplate.h"

int main()
{
	//making simple tree of integers
    TreeNode<int> *root = new TreeNode<int> (10);    //creating the root node 
    TreeNode<int> *node1 = new TreeNode<int> (20);
    TreeNode<int> *node2 = new TreeNode<int> (30);

    //connecting the root to its children
    root -> children.push_back(node1);
    root -> children.push_back(node2);

}
