#include<iostream>
#include<cmath>

using namespace std;

int main()
{
    int lim;
    float i,sum=0;
    cout<<"\n"<<endl;
    cout<<"Enter the Limit till than you want the SUM of SQUARED RECIPROCALS:-"<<endl;
    cin>>lim;
    cout<<endl;
    for(i=1;i<=lim;i++)
    {
        sum = sum + pow(1/(i+1),(i+1));
        cout<<"The value after step "<<i<<" is "<<sum<<endl;
    }
    cout<<"\nThe Final Result is "<<sum<<endl;
    return 0;
}