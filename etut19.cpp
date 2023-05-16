//for finding the missing no. s of range in entered array and
#include<iostream>
using namespace std;
void find( int [], int,int);
int main()
{    
    int a[100],n;
    cout<<"enter the size of the array :";
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    int k=a[0];
    for (int i = 0; i < n; i++)
{
    if (a[i]>k)
    {
        k=a[i];
    }
    
}
    cout<<"range of no.s that are missing from the entered no.s between [0,"<<k<<"] in the array are :";
    find(a,n,k);
    return 0;
}
void find(int a[],int n,int k){


for (int i = 0,j; i <= k; i++)
{  
    for (j = 0; j < n; j++)
    {
        if (i==a[j])
        {
            break;
        }
        
    }
    if (j==n)
    {
        cout<<i<<" ";
    }
    
    
}


}