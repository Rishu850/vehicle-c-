#include<bits/stdc++.h>
using namespace std;

int Menu();
void Bus();
void Cycle();
void Riksha();
void Delete();
void ShowDetail();
int nor=0,nob=0,noc=0,amount=0,c=0;
int main()
{
    while(1)
    {
        switch(Menu())
        {
            case 1:
                Bus();
                break;
            case 2:
                Cycle();
                break;
            case 3:
                Riksha();
                break;
            case 4:
                ShowDetail();
                break;
            case 5:
                Delete();
                break;
            case 6:
                exit(0);
            default:
                cout<<" Invalid Choice:"<<endl;
    }
    }
}
int Menu()
{
    int ch;
    cout<<"1. Enter Bus: "<<endl;
    cout<<"2. Enter Cycle: "<<endl;
    cout<<"3. Enter Riksha: "<<endl;
    cout<<"4. Show Status: "<<endl;
    cout<<"5. Delete data: "<<endl;
    cout<<"6. exit"<<endl;
    cout<<"   Enter your choice: "<<endl;
    cin>>ch;
    return(ch);
}
void Delete()
{
    nob=0;
    noc=0;
    nor=0;
    amount=0;
    c=0;
}
void ShowDetail()
{
    cout<<"Number of Bus:"<<nob<<endl;
    cout<<"Number of Cycle:"<<noc<<endl;
    cout<<"Number of Riksha:"<<nor<<endl;
    cout<<"Total Number of vehicles:"<<c<<endl;
    cout<<"Total gain amount:"<<amount<<endl;
}
void Riksha()
{
    cout<<"Entry Successful"<<endl;
    nor++;
    amount = amount+50;
    c++;
}
void Cycle()
{
    cout<<"Entry Successful"<<endl;
    noc++;
    amount = amount+20;
    c++;
}
void Bus()
{
    cout<<"Entry Successful"<<endl;
    nob++;
    amount = amount+100;
    c++;
}
