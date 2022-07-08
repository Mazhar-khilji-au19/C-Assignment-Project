// check if triangle is possible if angles are entered

#include<iostream>
using namespace std;

int main()
{
    int a,b,c;

    cout<<" Enter the angles first in degrees :";
    cin>>a;

    cout<<" Enter the angles second in degrees :";
    cin>>b;

    cout<<" Enter the angles third in degrees :";
    cin>>c;

{
    if (a+b+c == 180 && a != 0 && b != 0 && c != 0)
    cout<<"Valied";
    else
    cout<<"Unvalide";
}
    return 0;
}