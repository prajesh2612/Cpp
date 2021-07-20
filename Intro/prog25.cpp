#include<iostream>
using namespace std;

void function();//declation of the function before main function

int main()
{
    function();
    cout<<"Hello from main"<<endl;
    function();

    system("pause>0");
}
void function()
{
    cout<<"Hello from function()"<<endl;
}