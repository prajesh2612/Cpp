#include<iostream>
using namespace std;

int main()
{
    int n,r=0,d=0;
    cout<<"Enter a number:";
    cin>>n;
    while(n!=0)
    {
        d=n%10;
        r=r*10+d;
        n=n/10;
    }
    cout<<"The reversed number= "<<r<<endl;
}