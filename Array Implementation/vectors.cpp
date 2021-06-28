//vectors in cpp
//vectors are templates to create arrays which are dynamic in nature i.e. there is no size constraint

#include<iostream>
#include<vector>    //including the header file of vectors

using namespace std;

int main()
{
    vector <int> v;     //creating the vector from template

    v.push_back(10);   //to insert element in vector

    //inserting multiple elements
    for(int i = 0; i < 10; i++)
    {
        v.push_back(i+1);
    }

    //size i.e. the no of elements in vector
    cout << "Size : " << v.size() << endl;

    //to know the element at position
    cout << "Element at 2nd pos is " << v.at(2) << endl;

    //we can also use for loop to print the elements
    for(int j = 0; j < v.size(); j++)
    {
        cout << v.at(j) <<" " ;
    }
    cout << "\n" ;

    //capacity of underlying array of vector
    cout << "Capaity :" << v.capacity() << endl;

    //to remove last element from vector
    v.pop_back();
    cout << "Element removed" << endl;
    cout << "Size : " << v.size() << endl;

    //we can also access or change elements of vector just like the arrays

    cout << "3rd element is " << v[3] << endl;
    v[3] = 122;
    cout << "Now 3rd element is " << v[3] << endl;

}