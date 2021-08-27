#include<iostream>
using namespace std;

int main()
{
    int a,b;
    cout<<" Enter any two numbers:-\n";
    cin>>a>>b;
    if(a>b){
        cout<<" Larger value between "<<a<<" and "<<b<<" is "<<a<<endl;
    }
    else{
        cout<<" Larger value between "<<a<<" and "<<b<<" is "<<b<<endl;
    }
    return 0;
}