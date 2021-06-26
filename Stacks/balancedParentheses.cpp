
//checking balanced parentheses
//to check that all opening parentheses are closing or not 

#include<iostream>
#include<stack>
using namespace std;

// function to check if brackets are balanced
bool balancedBrackets(string expr)
{
	stack<char> s;
	char x;

	
	for (int i = 0; i < expr.length(); i++)
	{
		if (expr[i] == '(' || expr[i] == '['
			|| expr[i] == '{')
		{
			// Push the element in the stack
			s.push(expr[i]);
			continue;
		}

		
		if (s.empty())        //if the stack is empty without the closing brackets then the expression is inbalanced
			return false;
		
		//now comparing the stack top with the current closing brackets
		//if brackets dont match then return false
		switch (expr[i]) {
		case ')':
			
			
			x = s.top();
			s.pop();
			if (x == '{' || x == '[')
				return false;
			break;

		case '}':

			
			x = s.top();
			s.pop();
			if (x == '(' || x == '[')
				return false;
			break;

		case ']':

			
			x = s.top();
			s.pop();
			if (x == '(' || x == '{')
				return false;
			break;
		}
	}

	// Check Empty Stack
	return (s.empty());
}

// Driver code
int main()
{
	string expr ;
	cout << "Enter the expression: ";
	cin >> expr;

	// Function call
	if (balancedBrackets(expr))
		cout << "Expression is well-balanced" << endl;
	else
		cout << "Expression is un-balanced" << endl;
	return 0;
}

