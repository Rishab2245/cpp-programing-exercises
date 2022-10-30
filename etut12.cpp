//printing a diamond pattern
/*#include <iostream>
using namespace std;
int main()
{
    int n,i,k;
    cout<<"Enter a odd no.";
    cin>>n;
    for ( int i = 1; i <= n; i++)
    {   
        if (i>(n+1)/2)
        {   
            for ( int j = 1 ; j <= (-(((n+1)/2)-i)); j++) // j<= (i-((n+1)/2))
            {
                 cout<<" ";
            }
            for (int j = 65; j <(k)+65; j++)
             {
            cout<<(char)j;
            }
            cout<<endl;
            k-=2;
            continue;

            
        }
        for ( int j = 1; j <= (((n+1)/2)-i) ; j++)
        {
            cout<<" ";
        }
        for (int j = 65; j < (2*i-1) +65; j++)
        {
            cout<<(char)j;
        }
        cout<<endl;
        k=2*(i)-3;
        
        
        
    }
    return 0;
}
*/
//or
#include<iostream>
using namespace std;
int main()
{int n;
cout<<"Enter a odd no.";
cin>>n;
for (int i = 1; i <= (n+1)/2; i++)
{
    for (int j = (n+1)/2; j > i; j--)
    {
        cout<<" ";
    }
    for (int k = 65; k < (2*i-1)+65; k++)
    {
        cout<<(char)k;
    }
    cout<<"\n";
    
    
}
for (int i = 1; i <= ((n+1)/2 - 1); i++)
{
    for (int j = 0; j < i; j++)
    {
        cout<<" ";
    }
    for (int k = 65; k < ((n+1)/2-i)*2 - 1 + 65; k++)
    {
        cout<<(char)k;

    }cout<<endl;
    
    
}
return 0;







}