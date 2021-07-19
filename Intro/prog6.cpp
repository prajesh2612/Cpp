#include<iostream>
using namespace std;

int main()
{
    int a,b,c;
    cout<<"Enter the side lengths of the triangle:"<<endl;
    cout<<"Enter a:";
    cin>>a;
    cout<<"Enter b:";
    cin>>b;
    cout<<"Enter c:";
    cin>>c;
    if((a==b)&&(b==c)&&(c==a))
    {
        cout<<"Equilateral triangle"<<endl;
    }
    else if(((a==b)&&(a!=c))||((b==c)&&(b!=a))||((c==a)&&(c!=b)))
    {
        cout<<"Isoceles triangle"<<endl;
    }
    else if((a!=b)&&(b!=c)&&(c!=a))
    {
        cout<<"Scalene triangle"<<endl;
    }
    system("pause>0");
}