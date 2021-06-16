//linked list

#include<iostream>
using namespace std;
#include "NodeClass.cpp"

int main()
{
    //creating node
    Node n1(1);

    Node *head = &n1;   //this is head pointer which stores address of first node

    Node n2(2);

    n1.next = &n2;   //storing address of n2 node in next of n1;

    //cout << n1.data << " " << n2.data << endl;       //prints data of node
    cout << head -> data <<endl;   //prints data in the node of address of head

}