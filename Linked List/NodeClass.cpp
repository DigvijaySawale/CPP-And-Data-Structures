//linked list
//creating node of ll using class

class Node{
    public:
        int data;        //to store data
        Node *next;      //to store address of next node of type node 
        //this stores address of whole node (not of data only)
        //i.e. next is a pointer of type node

    Node(int data)
    {
        this -> data = data;       //putting data into this data
        next = NULL;               //putting NULL in address field
    }
};