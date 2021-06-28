//creating class to create the tree nodes

#include<vector>
using namespace std;

class TreeNode
{
    public:
        int data;
        vector <TreeNode*> children;//here if we dont mention <T> it will by default consider it as data type of data
        //children is the vector of pointers which will store addresses of all the children of parent node

        TreeNode(int data)
        {
            this -> data = data;
        }
};