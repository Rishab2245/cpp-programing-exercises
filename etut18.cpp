//finding the minimum sum of two elements such that they belong to different arrays are not at the same index
#include<iostream>
using namespace std;

int minimumsum(int[],int,int[],int);
int main()
{   int a[100],b[100],n1,n2;
    cout<<"enter the the size of first array a[]:";
    cin>>n1;
    for (int i = 0; i < n1; i++)
    {
        cin>>a[i];
    }
    
    cout<<"enter the size for second array b[]:";
    cin>>n2;
    for (int i = 0; i < n2; i++)
    {
        cin>>b[i];
    } 
    cout<<"\nthe minimum sum of the elements of array a and array b is :"<<minimumsum(a,n1,b,n2);

    

    return 0;
}
int minimumsum(int a[],int n1,int b[],int n2){
    int k=a[0]+b[1];
    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n2; j++)
        {
            if (a[i]+b[j]<k && i!=j)
            {
                k=a[i]+b[j];
            }
            
        }
        
    }
    return k;

}
//check for getting the no.s from the function to the main function by which the minimum sum is created
