#include<iostream>
#include<iomanip>                          // to use manipulators
using namespace std;
int main()
{
    int a =20;
    float b = 35.6309456;

    cout<<fixed<<setprecision(3)<<b<<endl;  //use of fixed<<setprecision() manipulator

    // EXPICIT TYPE CASTING

    cout<<"float(a) :- "<<float(a)<<endl;   // type casting of integer a into float in c++ style
    cout<<"(float)a :- "<<(float)a<<endl;   // type casting of integer a into float in c style
    
    cout<<"int(b) :- "<<int(b)<<endl;       // type casting of float b into integer in c++ style
    cout<<"(int)b :- "<<(int)b<<endl;       // type casting of float b into integer in c style

    return 0;
}