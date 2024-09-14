//  Write a function to print squares of first n natural numbers, taking n as argument to the function
#include<iostream>
using namespace std;

void ans(int n)
{
    for(int i = 1 ; i<=n ; i++)
    {
        int square = i*i ;
        cout<<"Square of "<<i<< " is "<<square;
        cout<<endl;
    }
}

int main()
{
    int n;
    cout<<"Enter n: ";
    cin>>n;
    
    ans(n);

    return 0;
}