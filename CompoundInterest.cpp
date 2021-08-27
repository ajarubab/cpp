#include<iostream>
using namespace std;
void cp(float pri,float rate,float time)
{
    float total;
    for (int i=1;i<=time;i++)
    {
        total = pri*(1+rate/100);
        pri = total;
    }
    cout<<"the total compounded value is "<<total<<" Rs.";
}
int main()
{
    float p,r,t,total;
    cout<<"Enter P,r,t"<<endl;
    cin>>p>>r>>t;
    cp(p,r,t);
    return 0;
}
// The Second Method is given below also.
/*
#include<iostream>
#include<math.h>
using namespace std;
void compound_interest(float pri,float rate, int time)
{
    float itr,total;
    for(int i = 1;i<=time;i++)
    {
        total = pri*pow((1+rate/100),time);
    }
    itr = total-pri;
    cout<<"The compound interst of principal amount of "
    <<pri<<" Rs. on the interest rate of "<<rate
    <<"% for time period of "<<time<<" years is "<<itr
    <<" and the total amount is "<<total<<"Rs."<<endl;
}
int main()
{
    float p,r,Total;
    int t;
    cout<<"Principal Amount"<<endl;
    cin>>p;
    cout<<"Rate of Interest"<<endl;
    cin>>r;
    cout<<"Time in years"<<endl;
    cin>>t;
    compound_interest(p,r,t);
    return 0;
}
*/