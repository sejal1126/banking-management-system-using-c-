
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
class Bank{
    string first_name,last_name;
    char add[100];
    int balance=0,add_money=0,withdraw_money=0;
    public:
    void createBankAccount()
    {
        cout<<"Enter your first name\t:\t";
        cin>>first_name;
        cout<<"Enter your last name\t:\t";
        cin>>last_name;
        cout<<"\n Enter your address\t:\t";
        cin.ignore();
        cin.getline(add,100);
        cout<<"Enter the Money you need to deposit\t:\t";cin>>balance;
    }
    void displaydetails();
    void Withdrawmoney();
    void addmoney();
    
};
void Bank ::  displaydetails()
{
    cout<<"\nCustomer Name \t:\t"<<first_name<<" "<<last_name;
    cout<<"\n Customer address\t:\t"<<add;
    cout<<"\n Account Balance\t:\t"<<balance;
}
void Bank :: Withdrawmoney()
{
    cout<<"\nAvailable balance \t:\t"<<balance;
    cout<<"\nMoney to Withdraw\t:\t";cin>>withdraw_money;
    balance-=withdraw_money;
    
    cout<<"\nAvailable balance after Withdraw \t:\t"<<balance;
}

void Bank :: addmoney()
{
    cout<<"\nEnter the money you need to deposit\t:\t";cin>>add_money;
    balance+=add_money;
    cout<<"\nMoney addeded Successfully";
}

int main()
{Bank obj;
    char c='y';
    do{
        cout<<"\n\n";
    cout<<"Bank Management System\n";
    cout<<"1.Create Bank Account\n";
    cout<<"2.Deposit Money\n";
    cout<<"3.Withdraw Money\n";
    cout<<"4.Display Bank details\n";
    cout<<"5.Exit\n";
    cout<<"Enter your choice\t:\t";
    int ch;
    cin>>ch;
    switch(ch)
    {
        case 1:  cout<<"1.Create Bank Account\n";
                 obj.createBankAccount();
                 break;
        case 2: cout<<"2.Deposit Money\n";
                obj.addmoney();
                break;
        case 3: cout<<"3.Withdraw Money\n";
                obj. Withdrawmoney();
                break;
        case 4: cout<<"4.Display Bank details\n";
                obj.displaydetails();
                break;
        case 5: cout<<"5.Exit\n";
                exit(1);
                break;
        default : cout<<"Wrong Choice";        
    }
cout<<"\nDo you want to do again press (y/Y) \t";cin>>c;
}while(c=='y'||c=='Y');
    return 0;
}
