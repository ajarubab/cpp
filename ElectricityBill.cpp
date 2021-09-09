#include<iostream>
using namespace std;
int main()                      // INCOMPLETE oN 1/9/2021
{
    string name[15];
    int no_of_people,in_ws;
    float unit_consumed[4],Electricity_Bill[5],Bill_Amount[5],universal_bill=50.00;
    cout<<"\n----------------------------------------------------------------------------------------\n";
    cout<<"Enter the number of people \t";
    cin>>no_of_people;
    cout<<"\n";
    for (int i = 1; i <= no_of_people; i++)
    {
        cout<<"Please Enter your Name of person "<<i<<" :- \t\t";
        in_ws = cin.get();
        getline(cin,name[i]);
        cout<<"Enter Your No. of Units consumed Monthly:-\t";
        cin>>unit_consumed[i];
        cout<<"\n";
    }
    cout<<"\n----------------------------------------------------------------------------------------";
    for (int i = 1; i <= no_of_people; i++)
    {
        if(unit_consumed[i] < 100)
        {
            Bill_Amount[i] = unit_consumed[i]*0.6;
            if(Bill_Amount[i]<50)
            {
                Electricity_Bill[i] = universal_bill;
            }
            else
            {
                Electricity_Bill[i] = Bill_Amount[i];

            }
            cout<<"\n"<<name[i]<<" Consumed "<<unit_consumed[i]<<" Units And has to pay "<<Electricity_Bill[i]<<" Rs.\n";   
        }
        if(unit_consumed[i] >= 100 && unit_consumed[i] <= 300)
        {
            Bill_Amount[i] = unit_consumed[i]*0.8;
            Electricity_Bill[i] = Bill_Amount[i];
            cout<<"\n"<<name[i]<<" Consumed "<<unit_consumed[i]<<" Units And has to pay "<<Electricity_Bill[i]<<" Rs.\n";   
        }
        if(unit_consumed[i] > 300)
        {
            Bill_Amount[i] = unit_consumed[i]*0.9;
            Electricity_Bill[i] = Bill_Amount[i]+ Bill_Amount[i]*0.15;
            cout<<"\n"<<name[i]<<" Consumed "<<unit_consumed[i]<<" Units And has to pay "<<Electricity_Bill[i]<<" Rs.\n";   
        } 
    }
    cout<<"\n----------------------------------------------------------------------------------------";
    return 0;
}