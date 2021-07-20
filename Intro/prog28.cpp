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
    introduceMe("Prajesh Raj Singh","Australia",21);
    introduceMe("Ramesh","Croatia",24);

    system("pause>0");
}