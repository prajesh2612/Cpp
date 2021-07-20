#include<iostream>
using namespace std;

int main()
{
    int i,j,size;
    char symbol;
    cout<<"Enter the size:";
    cin>>size;
    cout<<"Enter desired symbol:";
    cin>>symbol;
    for(i=size;i>=1;i--)
    {
        for(j=1;j<=i;j++)
        {
            cout<<symbol<<" ";
        }
        cout<<" "<<endl;
    }

    system("pause>0");
}