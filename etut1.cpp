#include<iostream>
using namespace std;
void main(){
    int n,temp,i;
    cin>>n;
    for ( i = 0; n > 0; i++)
    {
        n=n/10;
    }
    cout<<"the digits in the entered no. is :"<<i;
}