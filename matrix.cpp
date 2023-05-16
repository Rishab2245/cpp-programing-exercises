//making row and colume of the matrix zero if the element is zero
#include<iostream>
using namespace std;
int main()
{
    int a[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin>>a[i][j];
        }
        
    }
    int b[3][3];
     for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (a[i][j]==0)
            {
                b[i][j]=0;
            }
            
        }
        
    }
     for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if(b[i][j]==0){
                for (int k = 0; k < 3; k++)
                {
                    a[i][k]=0;
                    a[k][j]=0;
                }
                
            }
        }
        
    }
       for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<"\n";
        
    }


    
    return 0;
}