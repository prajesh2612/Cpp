#include<iostream>
using namespace std;

void printNumber(int *numberPtr)//This function recieves an integer pointer in it's parameter
{
    cout<<*numberPtr<<endl;
}

void printChar(char *charPtr)//This function recieves a character pointer in it's parameter
{
    cout<<*charPtr<<endl;
}

void print(void *ptr,char type)//This function recieves a void pointer and the type of data it is pointing to in it's parameter
{
    switch(type)
    {
        case 'i'://handle int* (int pointer)
        //the void pointer is first cast into the desired data-type because void pointers can't be dereferenced directly

        int *ptrA;
        ptrA=(int*)ptr;//here the void pointer '*ptr' is been cast into int data type and stored in the integer pointer
        cout<<*ptrA<<endl;
        break;

        //similarly in case of a character
        case 'c'://handle char*
        char *ptrB;
        ptrB=(char*)ptr;//here the void pointer '*ptr' is been cast into char data type and stored in the character pointer
        cout<<*ptrB<<endl;
        break;

    }
}

int main()
{
    int number=5;
    char letter='a';
    printNumber(&number);
    printChar(&letter);
    cout<<" "<<endl;
    print(&number,'i');
    print(&letter,'c');

    system("pause>0");
}