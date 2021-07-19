#include<iostream>
using namespace std;

int main()
{
    int yearOfBirth=1995;
    char gender='f';
    bool isOlderThan18=true;
    float averageGrade=4.5;
    double balance=4567894586;

    cout<<"Size of int is="<<sizeof(int)<<" bytes\n";
    cout<<"The minimum int value="<<(-2147483647-1)<<endl;
    cout<<"The maximum int value="<<2147483647<<endl;

    cout<<"Size of char is="<<sizeof(char)<<" bytes\n";

    cout<<"Size of bool is="<<sizeof(bool)<<" bytes\n";

    cout<<"Size of float is="<<sizeof(float)<<" bytes\n";

    cout<<"Size of double is="<<sizeof(double)<<" bytes\n";
}