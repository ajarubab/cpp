#include<iostream>
#include<iomanip>           // Header file to use manipulator "setw()""
using namespace std;
int main()
{
    int a =1234,b=234,c=12;
    cout<<"A = "<<setw(5)<<a<<endl; // setw() manipulator make content right justified.
    cout<<"B = "<<setw(5)<<b<<endl;
    cout<<"C = "<<setw(5)<<c<<endl;
    return 0;
}