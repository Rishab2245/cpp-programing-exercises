//return the max length of sequence which contains equal number of 0 and 1 elements
#include<iostream>
#include<vector>
using namespace std;
int main()
{   int n;
cout<<"Enter the size of the array";
cin>>n;
    int a[n];
for (int i = 0; i < n; i++)
{
    cin>>a[i];
}
int max=0;
for (int i = 0; i < n; i++)
{
    int zero = 0, one = 0;
    for (int j = i;j < n; j++)
    {
        if (a[j]==0)
        {
            zero++;
        }
        else{
            one++;
        }
        if (one == zero)
        {
            if ((one+zero)>max)
            {
                max=(one+zero);
            }
            
        }
        
        
    }
    
}

cout<<"the max length of 0 and 1 is :"<<max;


    return 0;
}