/*
  this is program on pointers arithmatic 
  in this we are trying to do arithmatic operations on pointers
  here done is addition
  
  ie. pointer moves to next memory location
*/

#include<iostream>

using namespace std;

int main()
{
     int i =10;
     int *p = &i;
     
     cout<< p <<endl;
     p   = p+ 1;
     cout<< p << endl;
     
     /*cout<< p <<endl;
     p   = p - 2;
     cout<< p << endl;
     */
     
     /*cout<< p <<endl;
     p--;
     cout<< p << endl;
     */
}
