#include<iostream>
using namespace std;

union person
{
    string name;
    int age; 
};

int main()
{
    union person p1;
    p1.age = 30;
    p1.name="aramshah";
    
    cout<<" The full name of person is "<<p1.name<<"."<<endl;
    cout<<" The Age of "<<p1.name<<" is "<<p1.age;
    return 0;
}
