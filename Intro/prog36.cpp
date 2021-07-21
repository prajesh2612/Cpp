#include<iostream>
using namespace std;

int main()
{
    int luckyNumbers[5]={2,3,5,7,9};
    cout<<luckyNumbers<<endl;
    cout<<*luckyNumbers<<endl;
    cout<<&luckyNumbers[0]<<endl;
    cout<<" "<<endl;

    cout<<luckyNumbers[2]<<endl;
    cout<<*(luckyNumbers+2)<<endl;


    system("pause>0");
}