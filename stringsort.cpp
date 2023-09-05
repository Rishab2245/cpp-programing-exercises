//sorting stiring in an array
#include<iostream>
#include<vector>
#include<string.h>
using namespace std;
void f(char a[][60],int n){
    for (int i = 0; i < n-1; i++)
    {   int index_min=i;
        for (int j = i+1; j < n; j++)
        {
            if (strcmp(a[index_min],a[j])>0)
            {
                index_min=j;
            }
            
        }
        if (index_min!=i)   
        {
            swap(a[index_min],a[i]);
            // char temp[60];
            // strcpy(temp,a[index_min]);
            // strcpy(a[index_min],a[i]);
            // strcpy(a[i],temp);
        }
        
        
    }
    
}
int main()
{
    char a[][60]={"papaya","lime","watermelon","apple","mango","kiwi"};
    int n=sizeof(a)/sizeof(a[0]);
    f(a,n);
    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }
    
    cout<<n;
    return 0;
}