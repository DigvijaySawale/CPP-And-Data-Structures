#include<iostream>
using namespace std;

int main()
{
     int m , n;
     cout << "Enter size:" << endl;
     cin >> m >> n ; 
     
     int **p = new int*[m];  //creating array of pointers dynamically
     
     for(int i = 0 ; i < m ; i++)
     {
     	p[i] = new int[n];    //creating each row dynamically using pointer array
     	
     	for (int j= 0 ; j< n ; j++)
     	{
     		cout << "Enter elements:" << endl;
     		cin >> p[i][j];    //entering elements
		 }
	 }
	 
	 for(int i = 0; i< m ; i++)
	 {
	 	delete [] p[i];  //as we created each row is deleted
	 }
	 
	 delete [] p;   //finally deleting the array of pointers
	 
	 
     
}
