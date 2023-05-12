#include<iostream>
using namespace std;

int main(){

int n,sum=0;
cout<<"Enter the value of n :";
cin>>n;
int i=0;
while(i<=n){
    if(i%2==0){
        sum=sum+i;
    }
    i++;
}
    cout<<"Sum of 1 to n even numbers :"<<sum;
    

return 0;
}