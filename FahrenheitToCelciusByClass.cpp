#include<iostream>
using namespace std;

class Temp
{
    float F_temp,C_temp;

    public:
        void getdata();
        int processing();
        void display();
};
void Temp::getdata(){
    cout<<"Enter the temperature in Fahreiheit:-\t";
    cin>>F_temp;
}
int Temp::processing(){
    C_temp = (F_temp-32)*5/9;
    return C_temp;
}
void Temp::display(){
    cout<<"The "<<F_temp<<"°F"<<" is equal to "<<C_temp<<"°C"<<".";
}
int main()
{
    Temp t;
    t.getdata();
    t.processing();
    t.display();
    return 0;
}