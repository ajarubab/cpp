#include<iostream>
using namespace std;
void TOH_2(int,char,char,char);
void TOH_3(int,char,char,char);
int main()
{
    int disks,step = 0,des_tower;
    cout<<"\nEnter the Number of Disks :-\t";
    cin>>disks;
    cout<<"\nEnter the number of Destination tower from TOWER 2 and TOWER 3.  :-\t";
    cin>>des_tower;
    if (disks<1)        
    {
        cout<<"\nThere is NO disks to shift."<<endl;
    }
    else
    {
        cout<<"\nThere are "<<disks<<" disks to shift from tower 1 to tower "<<des_tower<<endl;
        cout<<"\n-------------------------------------------------------------------------";
        switch (des_tower)
        {
        case 2:
            TOH_2(disks,'A','B','C');
            cout<<"\n-------------------------------------------------------------------------";
            cout<<"\n\n"<<disks<<" Disks of Tower 1 have been sifted to Tower 2 Sucessfully.\n"<<endl;
            break;
        case 3:
            TOH_3(disks,'A','C','B');
            cout<<"\n-------------------------------------------------------------------------";
            cout<<"\n\n"<<disks<<" Disks of Tower 1 have been sifted to Tower 3 Sucessfully.\n"<<endl;
            break;
        default:
            cout<<"You have Chosen a destination tower which is not TOWER 2 or TOWER 3."<<endl;
            break;
        }
    }
    return 0;
}
int step = 1;
void TOH_2(int n,char tower1,char tower2,char tower3)
{
    if (n==1)
    {
        cout<<"\nStep "<<step<<" : Shift Top disk from tower "<<tower1<<" to tower "<<tower2<<endl;
        step = step+1;
        return;
    }
    TOH_2((n-1),tower1,tower3,tower2);
    cout<<"\nStep "<<step<<" : Shift Top disk from tower "<<tower1<<" to tower "<<tower2<<endl;
    step = step+1;
    TOH_2((n-1),tower3,tower2,tower1);
}
void TOH_3(int n,char tower1,char tower3,char tower2)
{
    if (n==1)
    {
        cout<<"\nStep "<<step<<" : Shift Top disk from tower "<<tower1<<" to tower "<<tower3 <<endl;
        step = step+1;
        return;
    }
    TOH_3((n-1),tower1,tower2,tower3);
    cout<<"\nStep "<<step<<" : Shift Top disk from tower "<<tower1<<" to tower "<<tower3<<endl;
    step = step+1;
    TOH_3((n-1),tower2,tower3,tower1);
}