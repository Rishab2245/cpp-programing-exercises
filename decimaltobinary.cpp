//decimal to binary
#include<iostream>
#include<vector>
using namespace std;
int f(int n){
    if(n==0){
        return 0;
    }
    return n%2 + f(n/2)*10;
}
int main()
{
    int a=15;
    cout<<f(a);
    return 0;
}