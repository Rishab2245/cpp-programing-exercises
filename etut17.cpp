//reversing the entered  array
#include<iostream>
using namespace std;
void reverse(int *arr , int n){

for (int start = 0,end=n-1,temp; start<end; start++,end--)
{
    temp=arr[start];
    arr[start]=arr[end];
    arr[end]=temp;
}


}
int main()
{
    int a[100],n;
    cout<<"enter the size of the array :";
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    reverse(a,n);
    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<endl;
    }
    
    
    return 0;
}
