//taking input from user to create linked list

#include<iostream>
using namespace std;
#include "NodeClass.cpp"        //including the Node class

//better appraoch to take input in O(n) time
Node* takeInput_efficient()           //return type is node
{
    int data;
    cout << "->";
    cin >> data;
    Node *head = NULL;      //creating head pointer to store address of first node
    Node *tail = NULL;      //tail pointer to store address of last node

    while(data != -1)          //setting condition
    {
        Node * newNode = new Node(data);     //creating node dynamically to avoid automatic memory deallocation
        if(head == NULL)
        {
            head = newNode;
            tail = newNode;        //making tail to point on first node
        }
        else
        {
        	tail -> next = newNode;     //creating link between current last node and new node
        	tail = tail -> next;     // moving tail to new node which is now last node
        	//OR
        	//tail = newNode;
        }
        
        cout << "->";
        cin >> data;
    }

    return head;
}
/*
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
*/
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
    Node *head = takeInput_efficient();
    print(head);
}
