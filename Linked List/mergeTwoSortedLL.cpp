//merging two sorted linked list

#include<iostream>
using namespace std;
#include "NodeClass.cpp"

Node * mergeLL(Node *head1, Node *head2)
{
	if (head1 == NULL)
	{
    	return head2;
    }
    else if (head2 == NULL) 
    {
   		return head1;
    }
    
	Node *finalhead = NULL;
	
	if(head1 -> data < head2 -> data)
	{
		finalhead = head1;
		head1 = head1 -> next;
	}
	else if(head2 -> data < head1 -> data)
	{
		finalhead = head2;
		head2 = head2 -> next;
	}
	
	Node *finaltail = finalhead;
	
	while(head1 != NULL && head2 != NULL)
	{
		if(head1 -> data < head2 -> data)
		{
			finaltail -> next = head1;
			finaltail = finaltail -> next;
			head1 = head1 -> next;
		}
		else if(head1 -> data >= head2 -> data)
		{
			finaltail -> next = head2;
			finaltail = finaltail -> next;
			head2 = head2 -> next;
		}
		
	}
	
	if(head1 != NULL)
	{
		finaltail -> next = head1;
	}
	else if(head2 != NULL)
	{
		finaltail -> next = head2;
	}
	
	return finalhead;
}


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
	cout << "Enter data of 1st linked list in sorted order: " <<endl;
	Node *head1 = createLL();
	cout << "Enter data of 2nd linked list in sorted order: " <<endl;
	Node *head2 = createLL();
	/*
	print(head1);
	cout << endl;
	
	print(head2);
	cout << endl;
	*/
	
	Node * merged = mergeLL(head1, head2);
	print(merged);
	
	
	
}
