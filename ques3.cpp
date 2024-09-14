// Given two numbers a and b, write a function to print all odd numbers between them.
#include<iostream>
#include<cmath>
using namespace std;

void ans(int a , int b)
{
    for(int i = min(a,b) ; i<max(a,b) ; i++)
    {
        if(i%2!=0)
        {
            cout<<i<<endl;
        }
    }
}

int main()
{
    int a;
    cout<<"Enter first number: ";
    cin>>a;

    cout<<endl;

    int b;
    cout<<"Enter second number: ";
    cin>>b; 
    if(a==b)
    {
        cout<<"Input is same for both a and b so no odd number exist b/w them"<<endl;
    }
    else
    {
        ans(a,b);
    }

    return 0;
}