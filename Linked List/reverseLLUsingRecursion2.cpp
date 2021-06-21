//reversing linked list using recursion 
//using new class approach
//time complexity is O(n) 

#include<iostream>
using namespace std;

#include "llStructure.cpp"

//in order to make reverse linked list solution efficient we have to keep record of both head and tail
//so to make functions return both head and tail we create new class and make its object retrun the two properties

class Pair
{
	public:
		Node *head;
		Node *tail;
};

Pair reverseLL_2(Node *head)        //returns pair class object
{
	//base case
	if(head == NULL || head -> next == NULL)
	{
		Pair ans;
		ans.head = head;
		ans.tail = head;
		return ans;       //hence both head and tail will be kept in record
	}
	
	//recursion call
	Pair smallAns = reverseLL_2(head -> next);
	
	smallAns.tail -> next = head;     //here head is current head of recursion call
	head -> next = NULL;
	
	Pair ans;         //making new obj in order to return proper outputs for next recursion calls
	ans.head = smallAns.head;
	ans.tail = head;       //here head is current head of recursion call
	return ans; 
	

}

Node *reverseLL_better(Node *head)
{
	return reverseLL_2(head).head;       //return head property of pair object
}
int main()
{
	Node * head = createLL();
	print(head);
	cout << endl;
	Node * reversed = reverseLL_better(head);
	cout << "Reversed linked list using double node is : " ;
	print(reversed);
}
