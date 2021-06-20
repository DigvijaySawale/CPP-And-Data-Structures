//finding the mid node of linked list
//it can be done by finding the length of linked list and hence mid node

//but here we take help of two nodes 

#include<iostream>
using namespace std;

#include "NodeClass.cpp"

Node * midNode(Node *head)
{
	Node *slow = head ;           //slow to move one node at a time
	Node *fast = head -> next;    //fast to move two nodes at a time
	
	while(fast != NULL && fast -> next != NULL) //while fast is not null and fast -> next not null  
	{
		
		slow = slow -> next;
		fast = fast -> next -> next;
	
	}
	
	return slow;
}

//same code to create and print linked list from "userInput_efficient.cpp"
Node* createLL()          
{
    int data;
    cin >> data;
    Node *head = NULL;      
	Node *tail = NULL; 

    while(data != -1)          
    {
        Node * newNode = new Node(data);    
        if(head == NULL)
        {
            head = newNode;
            tail = newNode;       
        }
        else
        {
        	tail -> next = newNode;    
        	tail = tail -> next;            	
        }
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
	Node *head = createLL();
	
	Node *mid = midNode(head);
	cout << mid -> data << endl;
	
}
