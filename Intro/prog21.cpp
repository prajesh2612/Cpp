#include<iostream>
using namespace std;

int main()
{
    int length,breadth,i,j;
    char symbol;
    cout<<"Enter Length:";
    cin>>length;
    cout<<"Enter breadth:";
    cin>>breadth;
    cout<<"Symbol:";
    cin>>symbol;
    for(i=0;i<breadth;i++)
    {
        for(j=0;j<length;j++)
        {
            cout<<symbol<<"   ";;
        }
        cout<<" "<<endl;
    }

    system("pause>0");
}