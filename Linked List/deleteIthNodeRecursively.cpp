//delete nodes recursively

#include<iostream>
using namespace std;
#include "NodeClass.cpp"

//function to delete node from ith position
Node * deleteNode(Node *head, int i)
{
	if(head == NULL)
	{
		return NULL;       //base case
	}
	if(i == 0)
	{
		Node *temp = head -> next;         //small calculations
		delete head;           //deallocation of memory
		head = temp;
		return head;
	}
	Node *a = head -> next; 
	Node *b =  deleteNode(a, i-1);	 //recursion call
	head -> next = b;
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
	cout << "Current linked list" << endl;
	print(head);
	cout << endl;
	
	int i;
	cout <<"Enter position to delete-" << endl;
	cin >> i;
	
	
	head = 
	deleteNode(head, i);
	print(head);
}
