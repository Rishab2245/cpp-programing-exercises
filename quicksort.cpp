//mearge sort algorithm for array 
#include<iostream>
#include<vector>
using namespace std;
int partision(int *a, int first , int last) {
    int pivot=a[last];

    int i=first-1;
    int j=first;
    while (j<=last)
    {
        if (a[j]<pivot)
        {
            i++;
            swap(a[i],a[j]);

        }
        j++;
    }
    swap(a[i+1],a[last]);
    return i+1;
}
void quicksort(int *a , int first , int last){
  if (first>=last)
  {
    return;
  }
  int p=partision(a,first,last);
  quicksort(a, first,p-1);
  quicksort(a, p+1,last);
  
    
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for (int  i = 0; i < n; i++)
    {
        cin>>a[i];

    }
    quicksort(a,0,n-1);
    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }
    
    return 0;
}