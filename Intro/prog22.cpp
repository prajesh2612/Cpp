#include<iostream>
using namespace std;

int main()
{
    int i,j,side;
    char symbol;
    cout<<"Enter the length of side:";
    cin>>side;
    cout<<"Enter the desired symbol:";
    cin>>symbol;
    for(i=1;i<=side;i++)
    {
        for(j=1;j<=i;j++)
        {
            cout<<symbol<<" ";
        }
        cout<<" "<<endl;
    }

    system("pause>0");
}