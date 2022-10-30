#include<iostream>
using namespace std;
int main(){
    int n,i;
    cin>>n;
    for (i = 0; n > 0; i++)
    {
        n=n/10;
    }
    cout<<"the no. of digits in the entered no. is :"<<i;
    return 0;
    

}