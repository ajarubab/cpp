#include<iostream>
#include<unistd.h>

using namespace std;
int main()
{
    string contestent[5]={"NARENDRA MODI","RAHUL GANDHI","NITISH KUMAR","MAMTA BANERJEE","K CHANDRASHEKHAR RAO"};
    int count[5]={0,0,0,0,0};
    int num;
    char ch,ans,inp;

    do
    {
        portal_Starting:
        cout<<"\n\n"<<endl;
        for (int i = 0; i < 5; i++)
        {   
            cout<<"Press "<<(i+1)<<" to vote "<<contestent[i]<<"."<<endl;
        }
        cin>>num;

        switch (num)
        {
            case 1:
                loop_lable1:
                cout<<"You are casting your vote to "<<contestent[0]<<"."<<endl;
                cout<<"Press Y to confirm or N to reconsider."<<endl;
                cin>>ch;
                if (ch=='Y' || ch=='y')
                {
                    cout<<"Congratulations, You have casted your vote to "<<contestent[0]<<endl;
                    count[0]=count[0]+1;
                }
                else if (ch=='N' || ch=='n')
                {
                    cout<<"You have chosen to reconsider your candidate to vote.......Taking you to Starting."<<endl;
                    goto portal_Starting;
                }
                else
                {
                    cout<<"Wrong Input......Please Press Y or N."<<endl;
                    goto loop_lable1;
                }
                break;
            case 2:
                loop_lable2:
                cout<<"You are casting your vote to "<<contestent[1]<<"."<<endl;
                cout<<"Press Y to confirm or N to reconsider."<<endl;
                cin>>ch;
                if (ch=='Y' || ch=='y')
                {
                    cout<<"Congratulations, You have casted your vote to "<<contestent[1]<<endl;
                    count[1]=count[1]+1;
                }
                else if (ch=='N' || ch=='n')
                {
                    cout<<"You have chosen to reconsider your candidate to vote.......Taking you to Starting."<<endl;
                    goto portal_Starting;
                }
                else
                {
                    cout<<"Wrong Input......Please Press Y or N."<<endl;
                    goto loop_lable2;
                }
                break;
            case 3:
                loop_lable3:
                cout<<"You are casting your vote to "<<contestent[2]<<"."<<endl;
                cout<<"Press Y to confirm or N to reconsider."<<endl;
                cin>>ch;
                if (ch=='Y' || ch=='y')
                {
                    cout<<"Congratulations, You have casted your vote to "<<contestent[2]<<endl;
                    count[2]=count[2]+1;
                }
                else if (ch=='N' || ch=='n')
                {
                    cout<<"You have chosen to reconsider your candidate to vote.......Taking you to Starting."<<endl;
                    goto portal_Starting;
                }
                else
                {
                    cout<<"Wrong Input......Please Press Y or N."<<endl;
                    goto loop_lable3;
                }
                break;
            case 4:
                loop_lable4:
                cout<<"You are casting your vote to "<<contestent[3]<<"."<<endl;
                cout<<"Press Y to confirm or N to reconsider."<<endl;
                cin>>ch;
                if (ch=='Y' || ch=='y')
                {
                    cout<<"Congratulations, You have casted your vote to "<<contestent[3]<<endl;
                    count[3]=count[3]+1;
                }
                else if (ch=='N' || ch=='n')
                {
                    cout<<"You have chosen to reconsider your candidate to vote.......Taking you to Starting."<<endl;
                    goto portal_Starting;
                }
                else
                {
                    cout<<"Wrong Input......Please Press Y or N."<<endl;
                    goto loop_lable4;
                }
                break;
            case 5:
                loop_lable5:
                cout<<"You are casting your vote to "<<contestent[4]<<"."<<endl;
                cout<<"Press Y to confirm or N to reconsider."<<endl;
                cin>>ch;
                if (ch=='Y' || ch=='y')
                {
                    cout<<"Congratulations, You have casted your vote to "<<contestent[4]<<endl;
                    count[4]=count[4]+1;
                }
                else if (ch=='N' || ch=='n')
                {
                    cout<<"You have chosen to reconsider your candidate to vote.......Taking you to Starting."<<endl;
                    goto portal_Starting;
                }
                else
                {
                    cout<<"Wrong Input......Please Press Y or N."<<endl;
                    goto loop_lable5;
                }
                break;
            default:
                deflable:
                cout<<"Wrong Input......Do you want to Cast Vote??"<<endl;
                cin>>ans;
                if (ans=='Y'||ans=='y')
                {
                    cout<<"Taking you to Starting of the Portal."<<endl;
                    sleep(2);
                    goto portal_Starting;
                }
                else if (ans=='N'||ans=='n')
                {
                    break;
                }
                else
                {
                    goto deflable;
                }
        }
        cout<<"DO YOU WANT TO CONTINUE VOTING...(Y/N)"<<endl;
        cin>>inp;
        if (inp=='y')
        {
            goto portal_Starting;
            sleep(2);
        }
        else{
            cout<<"THANK YOU FOR TAKING PART IN VOTE.\n\nTERMINAING THE PROGRAM"<<endl;
            sleep(2);
        }
        
        
    } while (inp!='n');
    for (int i = 0; i < 5; i++)
    {
        cout<<"The total votes of "<<contestent[i]<<" is "<<count[i]<<"."<<endl;
    }
    if(count[0]>count[1] && count[0] > count[2] && count[0]> count[3] && count[0] > count[4])
    {
        cout<<"\n\n****The Winner of this election is "<<contestent[0]<<". *****"<<endl;
    }
    else if(count[1] > count[2] && count[1]> count[3] && count[1] > count[4])
    {
        cout<<"\n\n****The Winner of this election is "<<contestent[1]<<". *****"<<endl;
    }
    else if(count[2]> count[3] && count[2] > count[4])
    {
        cout<<"\n\n****The Winner of this election is "<<contestent[2]<<". *****"<<endl;
    }
    else if(count[3] > count[4])
    {
        cout<<"\n\n****The Winner of this election is "<<contestent[3]<<". *****"<<endl;
    }
    else
    {
        cout<<"\n\n****The Winner of this election is "<<contestent[4]<<". *****"<<endl;
    }
    return 0;
}