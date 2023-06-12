//Given a number n, print the following pattern without using any loop.
#include<iostream>
#include<vector>
using namespace std;
void f(int n){
    if (n<=0)
    {
        cout<<n<<" ";
        return ;
    }
    cout<<n<<" ";
    n-=5;
    f(n);
    cout<<n+5<<" ";
    return ;
    
}
int main()
{
    int n;
    cin>>n;
    f(n);
    return 0;
}