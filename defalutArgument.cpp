#include<iostream>

using namespace std;
int main()
{
    float amount;
    float value(float p,int n, float r = 0.15);
    void printline(char ch= '*',int len = 60);

    printline();

    amount = value(5000.00,5);
    cout<<"Final Value = "<<amount<<endl;

    amount = value(10000.00,5,0.30);
    cout<<"\nFinal Value = "<<amount<<endl;

    printline('#');

    return 0;
}

float value(float p,int n, float r)
{
    int year = 1;
    float sum = p;

    while (year<=n)
    {
        sum *= (1+r);
        year++;
    }
    return (sum);
}
void printline(char ch,int len)
{
    for(int i=1;i<=len;i++)
    {
        printf("%c ",ch);
    }
    printf("\n");
}