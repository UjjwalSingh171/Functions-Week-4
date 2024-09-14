// Write a function that takes the radius of a circle as an argument and returns its area.
#include<iostream>
#include<cmath>
using namespace std;

void ans(float r)
{
    float area = M_PI*r*r;
    cout<<"Area of circle with radius: "<<r<<" is "<<area;
}

int main()
{
    float r;
    cout<<"Enter radius: ";
    cin>>r;
    
    ans(r);

    return 0;
}