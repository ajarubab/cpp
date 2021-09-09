#include<iostream>
#include<math.h>
#include<iomanip>
using namespace std;
int main()
{
    float i = 0.0,j;
    float x,y,z;
    const float e = 2.71828;
    // cout<<"Enter the value of x "<<endl;
    // cin>>x;
    // y= pow(e,-x);
    // cout<<"the value of e^-x is "<<y<<endl;
    // cout<<"X"<<"\t";

    cout<<"X\t";
    for ( x = 1; x <= 9; x++)
    {
        cout<<"   "<<(x/10)<<"\t\t";
    }
    cout<<"\n"<<endl;
    for ( z = 0.0; z <= 9.0; z++)
    {
        cout<<z<<"\n";
        while (i<10.0)
        {
            for ( j = (i+0.1); j <= (i+1.0); j+=0.1)
            {
                y= pow(e,-j);
                cout<<"\t"<<y<<" ";
            }
            cout<<"\n";
            i = i+1.0;
            break;
        }
    }
    
    return 0;
}