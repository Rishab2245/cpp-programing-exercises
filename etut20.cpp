//find the element for which all the elements to its right is greater than it and to its left all elements are smaller than it
#include<iostream>
using namespace std;
int middle(int [],int );
int main()
{
    int a[100],n;
    cout<<"enter the size of the array :";
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    cout<<"the elements whose left are all smaller and whose right are all larger are :";
    middle(a,n);
    return 0;
}
int middle(int a[],int n){

    for (int i = 1,k,j; i < n-1; i++)
    {   k=0;
        for ( j = 0; j<i; j++)
        {
            if (a[j]>a[i])
            {
                k++;
            }
            
        }
        for ( j=j+1;j<n ; j++)
        {
            if (a[j]<a[i])
            {
                k++;
            }
            
        }
        if (k==0)
        {
            cout<<a[i]<<" ";
        }
        
        
        
    }
}
// }or method 2
// For each element in our array we find the max element to the left of that element and the minimum element to 
// the right of that element. If our element is greater than the left max and smaller than the right min then we
// know that this is our answer.