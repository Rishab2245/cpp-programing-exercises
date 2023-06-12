//checking the no. of palidrome or not by recursion 
#include<iostream>
#include<vector>
using namespace std;
bool f(int n,int*temp)
{
    if (n>=0 and n<=9)   {
        int lastdigitoftemp=(*temp)%10;
        (*temp)/=10;
        return n==lastdigitoftemp;
    }
    bool result = (f(n/10,temp) and (n%10)==((*temp)%10));
    (*temp)/=10;
    return result;

    
}
int main()
{
    int n=555;
   
    int temp=n;
    cout<<f(n,&temp);   
    return 0;
}