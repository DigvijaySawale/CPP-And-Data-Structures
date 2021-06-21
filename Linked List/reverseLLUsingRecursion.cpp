//reversing linked list using recursion
//complixity is n^2
#include<iostream>
using namespace std;

#include "llStructure.cpp"
//refer llStructure.cpp for class and createLL and print functions


Node * reverseLL(Node *head)
{
	//base case
	if(head == NULL || head -> next == NULL)
	{
		return head;
	}
	
	//recursion call
	Node * smallAns = reverseLL(head -> next);
	
	//small calculations
	Node *temp = smallAns;
	while(temp -> next != NULL)
	{
		temp = temp -> next;
	}
	
	temp -> next = head;
	head -> next = NULL;
	return smallAns;
}


int main()
{
	cout << "Enter the data elements of linked list: ";
	Node *head = createLL();
	print(head);
	cout << endl;
	
	Node *reversed = reverseLL(head);
	cout << "The reversed linked list is: " ;
	print(reversed); 
}
