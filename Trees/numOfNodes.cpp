//numbers of nodes in tree


#include<iostream>
#include<vector>
#include<queue>

#include "treeNodeClass.h"
using namespace std;

//number of nodes in tree using recursion 
int numNode(TreeNode* root)
{
	 int ans = 1;    //for the root count = 1
	 for(int i = 0; i < root -> children.size(); i++)
	 {
	 	ans += numNode(root -> children[i]);   //recursion on each children
	 }
	 return ans;
}
TreeNode * takeInput()
{
    int rootData;
    cout << "Enter the root data : " ;
    cin >> rootData;
    TreeNode *root = new TreeNode(rootData);

    queue <TreeNode*> pendingNodes;
    pendingNodes.push(root);

    while(pendingNodes.size() != 0)
    {
        TreeNode *front = pendingNodes.front();
        pendingNodes.pop();
        cout << "Enter the no of children of " << front -> data << " : ";
        int numChild;
        cin >> numChild;

        for(int i = 0; i < numChild; i++)
        {
            int childData;
            cout << "Enter the " << i << "th child data of " <<front -> data << " : ";
            cin >>childData;

            TreeNode *child = new TreeNode(childData);
            pendingNodes.push(child);
            front->children.push_back(child);
        }
    } 
    return root;
}

void printTree(TreeNode *root)
{
   
    if(root == NULL)
    {
        return;   
    }
   
    cout << root->data << " : ";    
    for(int j = 0; j < root -> children.size(); j++)
    {
        cout << root -> children[j] -> data << ",";
    }
    cout << endl;

    for(int i = 0; i < root->children.size(); i++)
    {
        printTree(root -> children[i]);   
    }
}


int main()
{
    cout << "-----------------Tree of Integers-----------------" <<endl;
    cout << "Enter the root and then the childrens respectively" << endl;
    cout << endl;
	TreeNode *root = takeInput();

    cout << "The tree entered is : " << endl ;
    printTree(root);
    
    cout << endl;
    cout << "The number of nodes in tree are: " << numNode(root) << endl;
}
