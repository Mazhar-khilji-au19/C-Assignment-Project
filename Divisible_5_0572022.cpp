// C Program to Check If a Number is Divisible by 5 and 11

#include<iostream>
using namespace std;

int main()
{
    int num;

    cout<<"Enter The Number To Check :";
    cin>>num;

    if (num % 5 == 0)
    cout<<"The Number is Divisible by 5";

    else 
    cout<<"The Number is Not Divisible by 5";

    return 0;
}