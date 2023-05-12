#include<iostream>
using namespace std;

int main(){
    
    int a,b,temp=0;
    cout<<"Enter value for a and b :";
    cin>>a>>b;
    temp=a;
    a=b;
    b=temp;
    cout<<"a is :"<<a<<endl;
    cout<<"b is :"<<b<<endl;
    return 0;
}