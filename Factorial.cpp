#include<iostream>
using namespace std;
int fact(int);
int main()
{
    int num,res;
    cout<<"Enter any Number :-\t";
    cin>>num;
    res = fact(num);
    cout<<"The Facorial of "<<num<<" is "<<res<<endl;
    return 0;
}
int fact(int a)
{
    if (a<=0)
        return 0;
    else if (a==1)
    {
        return 1;
    }
    else
    {
        return (a*fact(a-1));
    }
}