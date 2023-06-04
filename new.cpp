//Given an array of size ‘n’ (initially zero) and ‘Q’ updates (increase the value of all index 

//  from l to r with value x) and in the end print all the numbers of the array

#include<iostream>
#include<vector>
using namespace std;
int main()
{   int l,r,n,q,x;
    cin>>n>>q>>x;
    vector<int>a(n,0);
    while(q--){
        cin>>l>>r;
        for (int i = l; i <= r; i++)
        {
            a[i]+=x;
        }
        

    }
    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";                           
    }
    

    return 0;
}