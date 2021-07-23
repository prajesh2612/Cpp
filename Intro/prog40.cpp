#include<iostream>
using namespace std;

int main()
{
    int rows,cols,i;
    cout<<"rows,cols:";
    cin>>rows>>cols;

    int **table=new int *[rows];
    for(i=0;i<rows;i++)
    {
        table[i]=new int[cols];
    }
    table[0][0]=1;
    table[0][1]=2;
    table[2][2]=4;
    cout<<table[0][0]<<endl;

    delete[] table;
    cout<<table[0][0]<<endl;
    system("pause>0");
}