#include<iostream>
using namespace std;

int main()
{
    int luckyNumbers[5];
    int i;
    for(i=0;i<5;i++)
    {
        cout<<"Number:";
        cin>>luckyNumbers[i];
    }

    //simple method
    for(i=0;i<5;i++)
    {
        cout<<luckyNumbers[i]<<endl;
    }
    cout<<" "<<endl;

    //pointer method
    for(i=0;i<5;i++)
    {
        cout<<*(luckyNumbers+i)<<endl;
    }

    system("pause>0");
}