#include<iostream>
using namespace std;

inline double mul(double p,double q)
{
    return (p*q);
}

inline double div(double p,double q)
{
    return (p/q);
}
int main()
{
    cout<<"Let's do something new.\n";
    double a,b;
    cout<<"Enter the Value of A:-\t";
    cin>>a;
    cout<<"Enter the Value of B:-\t";
    cin>>b;
    cout<<"\n"s;
    cout<<a<<" * "<<b<<" = " <<mul(a,b)<<endl;
    cout<<a<<" / "<<b<<" = " <<div(a,b)<<endl;
    return 0;
}