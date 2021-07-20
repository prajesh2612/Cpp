#include<iostream>
using namespace std;

void menu()
{
    cout<<"**************MENU**************"<<endl;
    cout<<"1. Check balance"<<endl;
    cout<<"2. Deposit"<<endl;
    cout<<"3. Withdraw"<<endl;
    cout<<"4. End the process"<<endl;
    cout<<"*******************************"<<endl;
}
int main()
{
    int option,f=0;
    double balance=500;

    while(f==0)
    {
         menu();
    cout<<"Option: ";
    cin>>option;

        switch(option)
        {
            case 1:
            cout<<"Balance is: Rs."<<balance<<endl;
            break;

            case 2:
            double depositAmount;
            cout<<"Deposit Amount: Rs.";
            cin>>depositAmount;
            balance=balance+depositAmount;
            break;

            case 3:
            double withdrawAmount;
            cout<<"Withdraw amount: Rs.";
            cin>>withdrawAmount;
            if(withdrawAmount<=balance)
            {
                balance=balance-withdrawAmount;
            }
            else
            {
                cout<<"Not enough money"<<endl;
            }
            break;

            case 4:
            cout<<"The process has ended"<<endl;
            f=1;
            break;

            default:
            cout<<"Invalid option"<<endl;
            break;
        }
    }

    system("pause>0");
}