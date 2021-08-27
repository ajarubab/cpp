#include<iostream>
using namespace std;
void memory(int M)
{
    int* m = new int(M);
    if(*m!=0)
    {
        cout<<"Memmory Allocation to vector of size "<<M<<" is Successful."<<endl;
    }
    else
    {
        cout<<"Memmory Allocation to vector of size "<<M<<" is NOT Successful."<<endl;
    }
    delete m;
    cout<<"Memmory Allocation to vector is deleted."<<endl;
}
int main()
{
    int size;
    cout<<"Enter the size of M for vector creation:-"<<endl;
    cin>>size;
    memory(size);
    return 0;
}