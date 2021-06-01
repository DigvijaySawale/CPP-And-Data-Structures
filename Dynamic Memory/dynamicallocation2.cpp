#include<iostream>
using namespace std;

int main()
{
   int * p = new int ;
   delete p ;  //deletes the memory which is pointed by the pointer 
   
   
   p = new int ;
   delete p;    // syntax for deleting single element;
   
   p = new int[100];
   delete [] p;   //syntax to delete an array;
   
   
   /*
   while(true)
   {
       int *p = new int ;
           // memory size increases every time when loop is executed due to dynamic allocation
   }

   while (true0
   {
      int p = 10;
          //no memory size is increased as scope of variable is vanished within loop iteration
      
   }
}
