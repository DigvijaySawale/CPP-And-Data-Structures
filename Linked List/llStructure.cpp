//linked list structure

class Node{
    public:
        int data;        //to store data
        Node *next;      //to store address of next node of type node 
        //this stores address of whole node (not of data only)
        //i.e. next is a pointer of type node

    Node(int data)
    {
        this -> data = data;       //putting data into this data
        next = NULL;               //putting NULL in address field
    }
};

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

