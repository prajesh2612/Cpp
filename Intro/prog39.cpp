#include<iostream>
using namespace std;

int main()
{
    int size;
    cout<<"Size:";
    cin>>size;
    //allocation of memory
    int *myArray=new int[size];//'new' allocates memory

    for(int i=0;i<size;i++)
    {
        cout<<"Array["<<i<<"] ";
        cin>>myArray[i];
    }
    //index accessing method
    for(int i=0;i<size;i++)
    {
        cout<<myArray[i]<<" ";
    }
    cout<<" "<<endl;

    //dereferncing accessing method
    for(int i=0;i<size;i++)
    {
        cout<<*(myArray+i)<<" ";
    }
    cout<<" "<<endl;

    //deallocate memory
    delete[]myArray;
    myArray=NULL;

    //for each memory allocation, deallocation is also needed

    system("pause>0");
}