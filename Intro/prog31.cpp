#include<iostream>
using namespace std;

int checkPrime(int n)
{
    int i,f=0;
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            f++;
        }
    }
    return f;
}
int main()
{
   int i,c=0;
   for(i=1;i<=1000;i++)
   {
       c=checkPrime(i);
       if(c==2)
       {
            cout<<i<<" is a prime number"<<endl;
       }
       c=0;
   }

    system("pause>0");
}