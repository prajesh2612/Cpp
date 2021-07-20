#include<iostream>
using namespace std;

void introduceMe(string name,string city,int age)
{
    cout<<"My name is "<<name<<endl;
    cout<<"I'm from "<<city<<endl;
    cout<<"My age is "<<age<<endl;
}
int main()
{
    string name,city;
    int age;
    cout<<"Enter the name:";
    cin>>name;
    cout<<"Enter the city name:";
    cin>>city;
    cout<<"Enter the age::";
    cin>>age;
    introduceMe(name,city,age);

    system("pause>0");
}