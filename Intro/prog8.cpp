#include<iostream>
using namespace std;

int main()
{
    int a,b;
    cout<<"Enter the values:"<<endl;
    cout<<"Enter a:";
    cin>>a;
    cout<<"Enter b:";
    cin>>b;
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<" "<<endl;
    cout<<"The swapped values:"<<endl;
    cout<<"a="<<a<<endl;
    cout<<"b="<<b<<endl;

    system("pause>2");
}