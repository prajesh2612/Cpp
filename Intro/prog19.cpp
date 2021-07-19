#include<iostream>
using namespace std;

int main()
{
    int n,i,grade,sum=0;
    float avg;
    cout<<"Enter the number of grades to be entered:";
    cin>>n;
    for(i=0;i<n;i++)
    {
        do
        {
            cout<<"Enter grade "<<i+1<<": ";
            cin>>grade;
        } while (grade<1 || grade>5);
        sum=sum+grade;        
    }
    cout<<"Sum= "<<sum<<endl;
    avg=sum/n;
    cout<<"Average= "<<avg<<endl;
    system("pause>0");
}