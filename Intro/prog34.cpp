#include<iostream>
using namespace std;

int main()
{
    int n=5;
    cout<<n<<endl;
    cout<<&n<<endl;
    cout<<" "<<endl;

    int *ptr;
    ptr=&n;
    cout<<ptr<<endl;
    cout<<*ptr<<endl;
    cout<<&ptr<<endl;
    cout<<" "<<endl;

    *ptr=10;//dereferencing
    cout<<ptr<<endl;
    cout<<*ptr<<endl;
    cout<<n<<endl;
    cout<<" "<<endl;

    int *ptr2,v;
    ptr2=&v;
    *ptr2=7;
    cout<<ptr2<<endl;
    cout<<*ptr2<<endl;
    cout<<v<<endl;


    system("pause>0");
}