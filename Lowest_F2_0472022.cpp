#include<iostream>
using namespace std;

int main()
{
    int ans;

    cout<<" Enter The Number :";
    cin>> ans;

    if (ans<2)
        cout<<"Less than Two:"<<ans<<endl;
    
    
    else if (ans>2)
    cout<<"More Than Two :"<<ans<<endl;
    return 0;

}