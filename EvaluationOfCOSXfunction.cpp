#include<iostream>
#include<math.h>

using namespace std;

void calc(float ,float*);
int factorial(int );

int main()
{
    int degree;
    float radian, result = 0,ans=0;

    cout<<"Enter the value in Degree"<<endl;
    cin>>degree;
    radian = degree * (3.14/180);
    calc(radian,&result);
    ans = 1+(result);
    cout<<"Cos("<<degree<<") = "<<ans<<endl;
    cout<<"The value of Cos("<<degree<<") From (MATH.h) Library is "<<cos(radian)<<endl;

    return 0;
}

void calc(float x,float* res)
{

    int power,range = 1,sign = -1;

    for ( power = 2;range<= 10; power+=2)
    {
        *res = *res + sign * (pow(x,power)/factorial(power));
        range += 1;
        sign = sign * -1;
    }
}
int factorial(int num)
{
    int i;
    int fact_sum = 1;

    for ( i = 1; i <= num; i++)
    {
        fact_sum = fact_sum * i;
    }
    return fact_sum;
}
