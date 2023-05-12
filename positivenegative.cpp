#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter any nubmer:";
    cin>>n;

    if(n > 0)
    {
        cout<<"This is positive number";
    }
    else if(n==0)
    {
        cout<<"This is zero";
    }
    else
    {
        cout<<"this is negative number";
    }
    return 0;
}