//reverse linked list using recursion
//more easier approach

//using address of current head -> next to current head

#include<iostream>
using namespace std;

#include "llStructure.cpp"

Node * reverseLL_3(Node * head)
{
	if(head == NULL || head -> next == NULL)
	{
		return head;
	}
	
	Node * smallAns = reverseLL_3(head -> next);
	
	Node * tail = head -> next;     //since our head has address of next node we use it here
	tail -> next = head;         
	head -> next = NULL;
	
	return smallAns;

}

int main()
{
	Node * head = createLL();
	print(head);
	cout << endl;
	
	Node * reversed = reverseLL_3(head);
	cout << "The reversed linked list is: " ;
	print(reversed);
}
