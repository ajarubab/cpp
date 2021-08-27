#include<iostream>
using namespace std;

class abc
{
    private:
        int data1;
        char data2;
    public:
        void set(int i, char c)
        {
            data1=i;
            data2=c;
        }
        void display()
        {
            cout<<"Data1 = "<< data1<<endl;
            cout<<"Data2 = "<< data2<<endl;
        }
};
int main()
{
    abc* abc_ptr;       /* because abc_ptr is a ponter variable of type abc ......
                        it can only access public funtion using -> operator instead of . operator.*/
    abc obj;            // Normal object creaation.
    try
    {
        abc_ptr = new abc;
    }
    catch(bad_alloc ba)
    {
        cout<<"Bad Allocation occurred....Program is terminating now...."<<endl;
        return 1;
    }
    obj.set(25,'S');  // accessing member function by normal object obj using . operator.
    obj.display();     

    abc_ptr -> set(35,'A'); // accessing member function by pointer type object abc_ptr using -> operator.
    abc_ptr -> display();

    delete abc_ptr;
    return 0;
}