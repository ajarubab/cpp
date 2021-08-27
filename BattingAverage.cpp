#include<iostream>
using namespace std;
int main()
{
    int No_of_players,runs[10],innings[10],Not_out_innings[10];
    string name[5];
    

    cout<<"Enter the number of players :-"<<endl;
    cin>>No_of_players;

    char out_ws,in_ws;
    out_ws = cin.get();

    for(int i=1;i<= No_of_players;i++)
    {
        

        cout<<"Enter the Player "<<i<<" Name :"<<endl;
        getline(cin,name[i]);
        cout<<"Enter the Innings played by "<<name[i]<<endl;
        cin>>innings[i];
        cout<<"Enter the total run scored by "<<name[i]<<" in "<<innings[i]<<" innings."<<endl;
        cin>>runs[i];
        cout<<"Enter the total NOT OUT innings of "<<name[i]<<endl;
        cin>>Not_out_innings[i];

        in_ws = cin.get();
    }
    
    cout<<"NAME\t\tINNINGS\t\tRUNS\t\tNOT OUT\t\tAVERAGE"<<endl;
    
    float avg[No_of_players];
    
    for (int i = 1; i <= No_of_players; i++)
    {
        avg[i]= (float)runs[i]/(innings[i]- Not_out_innings[i]);
    }
    
    for (int i = 1; i <= No_of_players; i++)
    {
        cout<<name[i]<<"\t\t  "<<innings[i]<<"\t\t"<<runs[i]<<"\t\t  "<<Not_out_innings[i]<<"\t\t"<<avg[i]<<endl;
    }
    return 0;
}
