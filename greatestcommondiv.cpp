//find the greatest common divisor of two rumbers 
#include<iostream>
#include<vector>
using namespace std;
int f(int x,int y){
    if (y>x) return f(y,x);

    
    if (y==0)
    {
        return x;
    }
return f(y,x%y);
    
}
int main()
{
    int x,y;
    cin>>x>>y;
    int div=f(x,y);
    cout<<div;
    return 0;
}
