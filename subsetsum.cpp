//to find the sum of all subsets of the array 
#include<iostream>
#include<vector>
using namespace std;
void f(int *a,int n , int i, int sum,vector<int>&result){
    if (i==n) 
    {
        result.push_back(sum);
        return;
    }
    f(a,n,i+1,sum+a[i],result);
    f(a,n,i+1,sum,result);
    
}
int main()
{   int n;
    cin>>n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    vector<int>result;
    f(arr,n,0,0,result);
    for (int i = 0; i < result.size(); i++) 
    {
        cout<<result[i]<<" ";
    }
    

    return 0;
}