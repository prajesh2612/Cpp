#include<iostream>
using namespace std;

int main()
{
    int n,c=0;
    cout<<"Enter a number:";
    cin>>n;
    if(n==0)
    {
        cout<<"The entered number is 0"<<endl;
    }
    else
    {
         while(n!=0)
         {
            c++;
            n=n/10;
         }
        cout<<"The number of digits= "<<c<<endl;
    }

    system("pause>0");
}