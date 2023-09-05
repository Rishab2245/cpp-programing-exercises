//mearge short arrays
#include<iostream>
#include<vector>
using namespace std;
void mearge(int *a,int l,int mid ,int r){
    int cn=mid-l+1;
    int bn=r-mid;
    int c[cn],b[bn];
    for (int i = 0; i<cn; i++)
    {
        c[i]=a[l+i];
    }
    for (int i = 0; i<bn; i++)
    {
        b[i]=a[mid+i+1];
    }
    int i=0;
    int j=0;
    int k=l;
    while (i<cn and j<bn)
    {
        if (c[i]<b[j])
        {
            a[k++]=c[i++];
        }
        else{
            a[k++]=b[j++];
        }
        
    }
    while (i<cn)
    {
        a[k++]=c[i++];
    }
    while (j<bn)
    {
        a[k++]=b[j++];
    }
    
    
    
}
void meargesort(int *a,int l, int r){
    if (l>=r)
    {
        return;
    }
    int mid=(l+r)/2;
    
    meargesort(a,l,mid);
    meargesort(a,mid+1,r);
    mearge(a,l,mid,r);
    
}

int main()
{   int n;
cin>>n;
    int a[n];
    for (int i = 0; i < n; i++) 
    {
        cin>>a[i];
    }
    meargesort(a,0,n-1);
    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }
    
    
    return 0;
}