#include<iostream>
using namespace std;

int main()
{
    float weight,height,bmi;
    cout<<"Enter the required inputs"<<endl;
    cout<<"Enter Weight in kgs:";
    cin>>weight;
    cout<<"Enter height in ms:";
    cin>>height;
    bmi=(weight)/(height*height);
    cout<<"BMI="<<bmi<<endl;

    if(bmi<18.5)
    {
        cout<<"Underweight"<<endl;
    }
    else if((bmi>=18.5)&&(bmi<=24.9))
    {
        cout<<"Normal weight"<<endl;
    }
    else if(bmi>25)
    {
        cout<<"Overweight"<<endl;
    }

    system("pause>0");
}