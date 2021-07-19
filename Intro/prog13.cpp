#include<iostream>
using namespace std;

int main()
{
    int i=100;
    while(i<=500)
    {
        if((i%3==0)&&(i%5==0))
        {
            cout<<i<<" is divisible by 3 and 5" <<endl;
        }
        i++;
    }

    system("pause>0");
}