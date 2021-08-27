#include<iostream>
using namespace std;

class person
{
    string name;
    int age;
    public:
    void getdata();
    void putdata();
};
void person::getdata()
{
    cout<<" Enter Name:\t";
    getline(cin,name);
    cout<<" Enter Age:\t";
    cin>>age;
}
void person::putdata()
{
    cout<<"The Name of the person is "<<name<<endl;
    cout<<"The age of "<<name<<" is "<<age<<endl;
}
int main()
{
    person p;
    p.getdata();
    p.putdata();
    return 0;
}