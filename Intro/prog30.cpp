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
    int n,c=0;
    cout<<"Enter a number:";
    cin>>n;
    c=checkPrime(n);
    if(c==2)
    {
        cout<<n<<" is a prime number"<<endl;
    }
    else
    {
        cout<<n<<" is not a prime number"<<endl;
    }

    system("pause>0");
}