//two assending order array are given we need to mearge them also in asending order array
#include<iostream>
#include<vector>
using namespace std;
int * mearge(int a[],int n ,int b[],int m){
        int i=0,j=0,k=0;
        int *result = new int[n+m];
        while (i<n && j<m)
        {
            if (a[i]<b[j])
            {
                result[k] = a[i];
                i++;
                k++;
            }
            else{
                result[k] = b[j];
                j++;
                k++;
            }
            
        }
        while (i<n)
        {
            result[k] = a[i];
            i++;
            k++;
        }
        while (j<m)
        {
            result[k] = b[j];
            j++;
            k++;
        }
        

        return result;

}
int main()
{   int n;
    cout<<"Enter the size of the first array";
    cin>>n;
    int a[n];
    cout<<"Enter the elements of the first array";
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
  int m;
    cout<<"Enter the size of the second array";
    cin>>m;
    int b[m];
    cout<<"Enter the elements of the second array";
    for (int i = 0; i < m; i++)
    {
        cin>>b[i];
    }
    int *c =mearge(a,n,b,m);
    cout<<"the resulting array after the mearging the two array in ascending order is ";
    for (int i = 0; i <n+m; i++)
    {
        cout<<c[i]<<" ";
    }
    delete[] c;
    
    return 0;
}