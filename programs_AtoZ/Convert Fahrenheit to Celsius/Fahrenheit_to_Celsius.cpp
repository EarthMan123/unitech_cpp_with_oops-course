// C++ Program to Convert Fahrenheit to Celsius

#include<iostream>
using namespace std;
int main()
{
    float fahrenheit, celsius;
    cout<<"Enter the Temperature in Fahrenheit: ";
    cin>>fahrenheit;
    celsius = (fahrenheit-32)/1.8;
    cout<<"\nEquivalent Temperature in Celsius: "<<celsius;
    cout<<endl;
    return 0;
}
