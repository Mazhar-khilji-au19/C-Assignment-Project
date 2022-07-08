#include<iostream>
using namespace std;

int main()
{
    int l,w,peri,area;

    cout<<"Length :";
    cin>>l;

    cout<<"Witdh :";
    cin>>w;

    area = l*w;
    peri = 2*(l+w);

    cout<<"Area of rectangle :"<<area<<endl;
    cout<<"Perimater of rectangle :"<<peri;

    return 0;
}