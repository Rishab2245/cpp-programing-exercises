//prime checkpoint
#include<iostream>
#include<vector>
using namespace std;
bool f(int n,int temp){
    if(n==1){
        return 1;
    }
    return f(n-1,temp) and (temp%n!=0);
}
int main()
{
    int n=19;
    int temp=n;
    cout<<f(n-1,temp);

    return 0;
}