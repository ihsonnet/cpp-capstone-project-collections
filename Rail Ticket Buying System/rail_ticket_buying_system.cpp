#include<bits/stdc++.h>
using namespace std;
void registerAccount();
void login();
void getOption(int choice);
void buyTicket(int choice,int q);
#define lineSpace printf("\n\n");
string userName;
int passCode;
int main()
{
    int choiceMenu,choiceDestination,quantity;
    
    lineSpace

    cout<<"\t\t\tWelcome to rail Ticket Buying System"<<endl;
    
    lineSpace
    
    //Registration Start
    cout<<":: Registration:"<<endl;
    registerAccount();
    //Registration End
    
    lineSpace
    
    //Login start
    cout<<":: Login:"<<endl;
    login();
    //Login end
    
    lineSpace
    
    //Main Menu
    cout<<":: Menu List:"<<endl;
    cout<<"1) Buy Ticket"<<endl
        <<"2) Exit"<<endl;
    cout<<"Enter Choice: ";
    cin>>choiceMenu;
    
    lineSpace
    
    getOption(choiceMenu);
    //Main Menu End
    
    lineSpace
    
    //Buing Ticket
    cout<<"Enter Where you want to go (1/2/3/4/5/6): ";
    cin>>choiceDestination;
    cout<<"Enter number of tickets: ";
    cin>>quantity;
    buyTicket(choiceDestination,quantity);
    //Buing Ticket end
}
void registerAccount()
{
    cout<<"Enter user Name: ";
    cin>>userName;
    cout<<"Enter 3 digit PIN number: ";
    cin>>passCode;
    cout<<"Registration Successfull!"<<endl;
}

void login()
{
    string getUserName;
    int getPassCode;
    
    cout<<"Enter user Name: ";
    cin>>getUserName;
    cout<<"Enter 3 digit PIN number: ";
    cin>>getPassCode;

    if(getUserName==userName && getPassCode==passCode)
    {
        cout<<"Login Successfull"<<endl;
    }
    else
    {
        cout<<"Wrong User Name or Code. Please Enter Again."<<endl<<endl;
        login();
    }
}

void getOption(int choice)
{
    if(choice==1)
    {
        cout<<"1) Dhaka To Bhairab Bazar BDT 100"<<endl
        <<"2) Dhaka To Brahman Baria BDT 120"<<endl
        <<"3) Dhaka To Comilla BDT 150"<<endl
        <<"4) DhakaTo Laksam BDT 180"<<endl
        <<"5) Dhaka To Feni BDT 220"<<endl
        <<"6) Dhaka To Chittagong BDT 250"<<endl;
    }
    else
    {
        exit(0);
    }
}

void buyTicket(int choise,int q)
{
    int totalPrice,payment,priceList[]={100,120,150,180,220,250};
    totalPrice = q*priceList[choise-1];
    cout<<"Total Price: "<<totalPrice<<endl;

    cout<<"Enter Payment of tickets: ";
    cin>>payment;
    if(payment==totalPrice)
    {
        cout<<"Payment Successfull. Thank you for using the system."<<endl;
    }
    else
    {
        cout<<"Sorry, You Paid Wrong Amount!"<<endl;
    }
}