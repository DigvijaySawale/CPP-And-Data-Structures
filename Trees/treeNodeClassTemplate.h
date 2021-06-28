//tree node class template

#include<vector>
using namespace std;

template <typename T>
class TreeNode
{
    public:
        T data;
        vector <TreeNode <T> *> children; //here if we dont mention <T> it will by default consider it as data type of data
        //children is the vector of pointers which will store addresses of all the children of parent node

        TreeNode(T data)   //constructor
        {
            this -> data = data;
        }
};