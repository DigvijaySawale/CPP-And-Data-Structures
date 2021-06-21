//reverse linked list iteratively
//here we use extra pointer prev which keeps track of previous node

#include<iostream>
using namespace std;

#include "llStructure.cpp"

Node * reverse(Node *head)
{
	Node * current = head;        //current node 
	Node * next = NULL;           //next will store next node of current node
	Node * prev = NULL;           //prev will store previous node of current node
	
	while(current != NULL)
	{
		next = current -> next;      //store next
		
		current -> next = prev;      //reverse current node pointer
		
		                   //moving nodes forward;
		prev = current;              //moving prev forward
		
		current = next;              // and current to forward
	}
	
	return prev;
}

int main()
{
	cout << "Enter data of linked list : ";
	Node * head = createLL();
	print(head);
	cout << endl;
	Node * reversed = reverse(head);
	cout << "the reversed linked list is : " ;
	print(reversed);
}
