#include<iostream>
using namespace std;

int sum(int a, int b)
{
    int sum=a+b;
    return sum;
}
double sum(double a, double b)
{
    double sum=a+b;
    return sum;
}

float sum(float a, float b,float c)
{
    return (a+b+c);
}
int main()
{
    cout<<"Sum 1="<<sum(4,5)<<endl;
    cout<<"Sum 2="<<sum(4.542,5.980)<<endl;
    cout<<"Sum 3="<<sum(4.5,5.5,6.5)<<endl;   

    system("pause>0");
}