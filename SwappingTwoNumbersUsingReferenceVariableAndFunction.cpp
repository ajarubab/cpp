#include<iostream>
using namespace std;
void swap(int &a, int &b)
{
    a = a+b;
    b = a-b; 
    a = a-b;
}
int main()
{
    int num1 =100;
    int num2 = 200;
    cout<<"Before Swapping Num1 ="<<num1<<" and Num2 ="<<num2<<endl;
    swap(num1,num2);
    cout<<"After Swapping Num1 ="<<num1<<" and Num2 ="<<num2<<endl;
    return 0;
}