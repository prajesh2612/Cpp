#include<iostream>
using namespace std;

int main()
{
    float a,b;
    int f=1;
    while(f!=0)
    {
        cout<<"Enter the two numbers:"<<endl;
        cout<<"a=";
        cin>>a;
        cout<<"b=";
        cin>>b;
        cout<<"Enter your choice of operation:"<<endl;
        cout<<"Enter '+' for addition\nEnter '-' for subtraction\nEnter '*' for multiplication\nEnter '/' for division\nEnter '$' to end the process"<<endl;
        char ch;
        cin>>ch;
        switch(ch)
        {
            case '+':
            cout<<a+b<<endl;
            break;

            case '-':
            cout<<a-b<<endl;
            break;
            
            case '*':
            cout<<a*b<<endl;
            break;

            case '/':
            cout<<a/b<<endl;
            break;

            case '$':
            cout<<"The process ended"<<endl;
            f=0;
            break;

            default:
            cout<<"Invalid choice"<<endl;
            break;
        }
    }

    system("pause>0");
}