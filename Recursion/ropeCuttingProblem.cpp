// this is the rope cutting problem using recursion

// here the rope is to cut in such a way that there should be maximum pieces of given lengths
// when rope n is cut into either a, b or c lenght pieces



#include<iostream>
using namespace std;

int maxCuts(int n, int a, int b, int c)
{
	if(n == 0)
		return 0;
	if(n <= -1)
		return -1;

	int cutna = maxCuts(n-a, a, b, c);     // calling recursion
	int cutnb = maxCuts(n-b, a, b, c); 
	int cutnc = maxCuts(n-c, a, b, c);
	
	int res = max(cutna, max(cutnb,cutnc));  // taking maximum from each piece length

	if(res == -1)
		return -1;

	return res + 1; 
}

int main()
{
	int n ; //initial length of rope
	int a, b, c;
	cout << "Enter the values for n, a, b ,c: ";
	cin >> n >> a >> b >> c;
	int cuts = maxCuts(n , a , b , c);
	cout << "The rope can be cut in " << cuts << " pieces" << endl;
	
}
