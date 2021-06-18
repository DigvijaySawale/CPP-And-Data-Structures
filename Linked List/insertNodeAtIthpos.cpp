//insert node at ith position in linked list

#include<iostream>
using namespace std;
#include "NodeClass.cpp"

void insertNode(Node *head, int i, int data)
{
	Node *newNode = new Node(data);      //creating the required new node dynamically
	Node *temp = head;       //creating temp pointer for head
	int count = 0;
	
	while(count < i-1)     //traversing to i - 1 node 
	{
		temp = temp -> next;
		count++;
	}
	
	newNode -> next = temp -> next;      //linking the new node to current ith node
	temp -> next = newNode;             //linking the i-1 node to new node
	
	/*
	OR
	
	Node *a = temp -> next;
	temp -> next = newNode;
	newNode -> next = a;
	*/
	
}

//using the previous functions to create user linked list and print it
Node* takeInput_efficient()           //return type is node
{
    int data;
    //cout << "->";
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
        
        //cout << "->";
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
	Node *head = takeInput_efficient();
	print(head);
	cout << endl;
	insertNode(head, 2, 99);
	print(head);
}
