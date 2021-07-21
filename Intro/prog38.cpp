#include<iostream>
using namespace std;

int getMin(int numbers[],int size)
{
    int min=numbers[0];
    for(int i=0;i<size;i++)
    {
        if(min>numbers[i])
        {
            min=numbers[i];
        }
    }
    return min;
}

int getMax(int numbers[],int size)
{
    int max=numbers[0];
    for(int i=0;i<size;i++)
    {
        if(max<numbers[i])
        {
            max=numbers[i];
        }
    }
    return max;
}

void getMinAndMax(int numbers[],int size,int *min,int *max)
{
    for(int i=0;i<size;i++)
    {
        if(*max<numbers[i])
        {
            *max=numbers[i];
        }
        if(*min>numbers[i])
        {
            *min=numbers[i];
        }
    }
}

int main()
{
    int numbers[5]={5,4,-2,29,6};
    cout<<"Min is "<<getMin(numbers,5)<<endl;
    cout<<"Max is "<<getMax(numbers,5)<<endl;
    cout<<" "<<endl;
    int min=numbers[0];
    int max=numbers[0];
    getMinAndMax(numbers,5,&min,&max);
    cout<<"Min is: "<<min<<endl;
    cout<<"Max is: "<<max<<endl;

    system("pause>0");
}