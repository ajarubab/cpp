#include<iostream>
using namespace std;

enum colour
{
        red,blue,white
};

int main()
{
    int code;
    cout<<"Enter the shape code"<<endl;
    cin>>code;
    while (code>=red && code<=white)
    {
        switch (code)
        {
        case red:
            cout<<"it is Red Colour"<<endl;
            break;
        case blue:
            cout<<"it is Blue Colour"<<endl;
            break;
        case white:
            cout<<"it is White Colour"<<endl;
            break;
        default:
            cout<<"This is Defalut colour."<<endl;
            break;
        }
        cout<<"Enter the shape code"<<endl;
        cin>>code;
    }
    cout<<"BYE \n";
    return 0;
}