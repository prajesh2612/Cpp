#include<iostream>
using namespace std;

int main()
{
    char c1,c2,c3,c4,c5;
    cout<<"Enter 5 letters:";
    cin>>c1>>c2>>c3>>c4>>c5;//multiple inputs in a single line
    cout<<"ASCII message:"<<(int)c1<<" "<<(int)c2<<" "<<(int)c3<<" "<<(int)c4<<" "<<(int)c5;
    //does not consider any blank spaces

    system("pause>0");
}