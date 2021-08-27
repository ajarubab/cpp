// #include<iostream>
// using namespace std;

// struct person
// {
//     char first_name[20];
//     char last_name[20];
//     int age;
// };

// int main()
// {
//     person padosi;
//     strcpy(padosi.first_name,"Rama");
//     strcpy(padosi.last_name,"Krishna");
//     padosi.age = 30;

//     cout<<"\nThe name of the person is "<<padosi.first_name<<" "<<padosi.last_name<<endl;
//     cout<<"The age of "<<padosi.first_name<<" "<<padosi.last_name<<" is "<<padosi.age<<endl;
//     return 0;
// }
// --------------------------------------------------------------------------------------------------
// Second method to do that above program.

#include<iostream>
using namespace std;

struct person
{
    string first_name;
    string last_name;
    int age;
};

int main()
{
    person padosi;
    padosi.first_name="Ram";
    padosi.last_name="Babu";
    padosi.age = 30;

    cout<<"\nThe name of the person is "<<padosi.first_name<<" "<<padosi.last_name<<endl;
    cout<<"The age of "<<padosi.first_name<<" "<<padosi.last_name<<" is "<<padosi.age<<endl;
    return 0;
}

//----------------------------------------------------------------------------------------------------
