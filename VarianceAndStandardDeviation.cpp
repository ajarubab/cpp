#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    float num,sum = 0,mean,variance,standard_deviation;
    cout<<"Enter the last Number of first N Natural numbers "<<endl;
    cin>>num;
    for (int i = 1; i <= num; i++)
    {
        sum +=i;
    }
    cout<<"The Sum of first "<<num<<" Natural Numbers is "<<sum<<endl;
    mean = sum/num;
    cout<<"The mean of first "<<num<<" Natural Numbers is "<<mean<<endl;
    variance = ((num*num)-1)/12;
    cout<<"The Variance of first "<<num<<" Natural Numbers is "<<variance<<endl;
    standard_deviation = sqrt(variance);
    cout<<"The Standard Deviation of first "<<num<<" Natural Numbers is "<<standard_deviation<<endl;
    return 0;
    
    // -----------------------------------------------------------------------------------------------------
                // int i,j;
                // float mean,last_Natural_number,n=0,variance,sd;
                // cout<<"Enter the value of N"<<endl;
                // cin>>last_Natural_number;
                // for (i = 1; i <= last_Natural_number; i++)
                // {
                //     n = n +i;
                // }
                // cout<<"The Sum of first "<<last_Natural_number<<" Natural numbers is "<<n<<endl;
                // mean = n/last_Natural_number;
                // cout<<"The Mean of first "<<last_Natural_number<<" Natural numbers is "<<mean<<endl;
                // for (j = 1; j <= last_Natural_number; j++)
                // {
                //     float temp1, temp2;
                //     temp1 = j-mean;
                //     temp2 = pow(temp1,2);
                //     variance = temp2/last_Natural_number;
                //     sd = pow(variance,1/2);
                // }
                // cout<<"The Variance of first "<<last_Natural_number<<" Natural numbers is "<<variance<<endl;
                // cout<<"The Standard Deviation of first "<<last_Natural_number<<" Natural numbers is "<<sd<<endl;
                // return 0;
    // --------------------------------------------------------------------------------------------------------------
}