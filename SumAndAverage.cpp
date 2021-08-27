#include<iostream>
using namespace std;

int main()
{
    float num1,num2,sum,avg;
    cout<<"Enter the value of num1 and num2 respectively\n";
    cin>>num1>>num2;
    sum = num1+num2;
    avg = sum/2;
    cout<<"The Sum of "<<num1<<" and "<<num2<<" is "<<sum<<" and "
    <<"The Average of "<<num1<<" and "<<num2<<" is "<<avg<<endl;;
    return 0;
}