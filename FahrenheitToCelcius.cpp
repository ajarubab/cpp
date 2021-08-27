#include<iostream>
using namespace std;

int main()
{
    float F_temp,C_temp;
    cout<<"Enter the temperature in Fahrenheit :-"<<endl;
    cin>>F_temp;
    C_temp = (F_temp-32)*5/9;
    cout<<"The "<<F_temp<<"°F"<<" is Equal to "<<C_temp<<"°C"<<"."<<endl;
    return 0;
}