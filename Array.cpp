#include<iostream>
using namespace std;
int main()
{
    string name[] = {"Ram","Shyam","Rozi","Ajay","Soni" }; // double quotes required for string array initialization

    int mathMarks[5];   // Size is mandatory if just declaring the array and not initializing in the same line.
    mathMarks[0] = 65;
    mathMarks[1] = 56;
    mathMarks[2] = 67;
    mathMarks[3] = 89;
    mathMarks[4] = 54;

    // cout<<"The Maths Marks of "<<a[0]<<" is "<<mathMarks[0]<<endl;
    // cout<<"The Maths Marks of "<<a[1]<<" is "<<mathMarks[1]<<endl;
    // cout<<"The Maths Marks of "<<a[2]<<" is "<<mathMarks[2]<<endl;
    // cout<<"The Maths Marks of "<<a[3]<<" is "<<mathMarks[3]<<endl;
    // cout<<"The Maths Marks of "<<a[4]<<" is "<<mathMarks[4]<<endl;

    for (int i = 0; i < 5; i++)
    {
        cout<<"The Maths Marks of "<<name[i]<<" is "<<mathMarks[i]<<endl;
    }
    

    // Pointers in Array

    string* p = name;
    
    cout<<"The value of *p is "<<*p<<endl;
    cout<<"The value of *(p+1) is "<<*(p+1)<<endl;
    cout<<"The value of *(p+2) is "<<*(p+2)<<endl;
    cout<<"The value of *(p+3) is "<<*(p+3)<<endl;
    cout<<"The value of *(p+4) is "<<*(p+4)<<endl;

    cout<<*(p++)<<endl; // printing the value of *p and then incrementing it by 1.
    cout<<*(++p)<<endl; // incrementing the value of *p by 1  and then printing the value of *p.

    return 0;
} 