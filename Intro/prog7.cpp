#include<iostream>
using namespace std;

int main()
{
    cout<<5+2<<endl;
    cout<<5/2<<endl;
    cout<<5.0/2<<endl;
    cout<<5-2<<endl;
    cout<<5*2<<endl;
    cout<<5%2<<endl;

    cout<<" "<<endl;

    //increament
    int a=5;
    cout<<a++<<endl;//operation on the variable happens first then increment happens (post increment)
    cout<<a<<endl;
    cout<<" "<<endl;

    int b=5;
    cout<<++b<<endl;//first increament happens then operation on the variable takes place (pre increament)
    cout<<b<<endl;
    cout<<" "<<endl;

    //decreament
    int c=5;
    cout<<c--<<endl;//operation on the variable happens first then decrement happens (post decreament)
    cout<<c<<endl;
    cout<<" "<<endl;

    int d=5;
    cout<<--d<<endl;//first decreament happens then operation on the variable takes place (pre decreament)
    cout<<d<<endl;
    cout<<" "<<endl;



    system("pause>0");
}