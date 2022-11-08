#include<iostream>
using namespace std;
int main()
{
    float celsius,far;
    cout<<"Enter the temperature in celsius:";
    cin>>celsius;
    far=(celsius*9/5)+32;
    cout<<"The value of celsius in farenheit is "<<far<<"F";
    return 0;
}