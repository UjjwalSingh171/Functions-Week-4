// QUES: Write a function to count the number of digits in a number and then 
//       print the square of this number.
#include<iostream>
using namespace std;
int countdigits(int n)
{
    int a = n;
    int count = 0;
    do
    {
        n=n/10;
        count ++;
    }while(n!=0);
    cout<<"Number of digits in n= "<<count<<endl;
    cout<<"Square of this number is: "<<a*a;

    return 0;

}
int main()
{
    int n;
    cout<<"Enter n: ";
    cin>>n;

    countdigits(n);

    return 0;
}