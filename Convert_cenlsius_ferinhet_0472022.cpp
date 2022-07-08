#include<iostream>
using namespace std;

int main()
{
    float fahrenheit, celsius;

    cout<< "Enter The Temperature In Celsius : ";
    cin>> celsius;

    fahrenheit = (celsius * 9.0) / 5.0 + 32;

    cout<<" The Temprature in Celsisus"<<celsius<<endl;
    cout<<" The Temprature in fahrenheit :4"<<fahrenheit<<endl;
    return 0;


}