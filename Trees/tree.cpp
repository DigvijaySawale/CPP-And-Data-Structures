//implementing the tree
//efficient input and printing of tree

#include<iostream>
#include<vector>
#include<queue>
using namespace std;
 
class TreeNode
{
    public:
        int data;
        vector <TreeNode *> children;  //children vector to store its children

        TreeNode(int data)
        {
            this -> data = data;
        }
};

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
}
