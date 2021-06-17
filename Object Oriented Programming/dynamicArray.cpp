//creating the dynamic array

#include<iostream>
using namespace std;

class DynamicArray
{
    int *data;         //array pointer to store data
    int nextIndex;     //to mark current index of element
    int capacity;      //current array capicity

    public:

        DynamicArray()      //constructor
        {
            data = new int[5];      //taking first array as of 5 capacity
            nextIndex = 0;
            capacity = 5;
        }

        void add(int element)       //to add element at nextindex position i.e. at last posittion
        {
            if(nextIndex == capacity)     //checking for the size of the array to add elements
            {
                int *newdata = new int[2 * capacity];    //creating new array of double size
                for(int i = 0; i< capacity; i++)
                {
                    newdata[i] = data[i];       //copying elements
                }
                delete [] data;           //(deleting array) deallocating the current memory to avoid space wasteage
                data = newdata;          //making data to point newdata  (data and newdata contains the address of arrays)
                capacity *= 2;
            }
            data[nextIndex] = element;
            nextIndex++;
        }

        int get(int i)
        {
            if(i < nextIndex)
                return data[i]; 
            else
                return -1; 
        }

        void add(int i, int element)
        {
            if(i < nextIndex)
            {
                data[i] = element;
            }
            else if(i == nextIndex)
            {
                add(element); 
            }
            else
            {
                return;
            }
        }

        void print()
        {
            for(int i = 0; i < nextIndex; i++)
            {
                cout << data[i] << " ";
            }
            cout <<"\n";
        }

};

int main()
{
    DynamicArray d1; 

    d1.add(10);
    d1.add(20);
    d1.add(30);
    d1.add(40);
    d1.add(50);
    d1.add(60);

    d1.print();

    DynamicArray d2(d1);

    DynamicArray d3;
    d3 = d1;

    d1.add(0,100);

    d2.print();     //here default copy constructor is called in both cases which makes shallow copy
    d3.print();     //to avoid this we can create our own copy constr and overlaod the copy assignment operator
    

}