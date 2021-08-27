#include<iostream>
using namespace std;
int main()
{
    int a = 10;
    int* b = &a;
    int** c = &b;
    int*** d = &c;

    cout<<a<<endl;          //  Value of a 
    cout<<&a<<endl;         //  Address of a
    cout<<b<<endl;         //  Value of b = ADDRESS OF A
    cout<<*b<<endl;         //  Value of *b = VALUE OF A
    
    cout<<&b<<endl;         //  &b = Address of b
    cout<<c<<endl;          //  Value of c = Address of b

    cout<<&c<<endl;         //  &c = Address of c

    cout<<*c<<endl;         //  *c = Address of a
    cout<<**c<<endl;        //  **c = Value of a
    
    cout<<&d<<endl;        //  &d = Address of d
    cout<<d<<endl;        //  Value of d = Address of c
    cout<<*d<<endl;        //  *d = Address of b
    cout<<**d<<endl;        //  **d = Address of a
    cout<<***d<<endl;        //  ***d = Value of a
    
    return 0;
}