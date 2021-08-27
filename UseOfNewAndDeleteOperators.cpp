#include<iostream>
using namespace std;
int main()
{
    int* arr,size;
    cout<<"Enter the size of interger array:-\t"<<endl;
    cin>>size;
    cout<<"Creating an array of size "<<size<<"..."<<endl;

    arr = new int[size];
    cout<<"Dynamic allocation of memory for the array arr is succesful."<<endl;

    delete arr; 
    cout<<"Memory freeing is also succesful for the array arr."<<endl;
    return 0;
}