//taking input from user to create linked list

#include<iostream>
using namespace std;
#include "NodeClass.cpp"        //including the Node class

Node* takeInput()           //return type is node
{
    int data;
    cout << "->";
    cin >> data;
    Node *head = NULL;      //creating head pointer to store address of first node

    while(data != -1)          //setting condition
    {
        Node * newNode = new Node(data);     //creating node dynamically to avoid automatic memory deallocation
        if(head == NULL)
        {
            head = newNode;
        }
        else
        {
            Node *temp = head;      //creating temporary variable

            while(temp -> next != NULL)     //traversing to last node
            {
                temp = temp -> next;
            }    
            temp -> next = newNode;   //connecting nodes to each other
        }
        
        cout << "->";
        cin >> data;
    }

    return head;
}

void print(Node *head)
{
    Node *temp = head;
    while(temp != NULL)
    {
        cout << temp -> data << " ";
        temp = temp -> next;
    }

}

int main()
{
    Node *head = takeInput();
    print(head);
}
