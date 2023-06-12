// check for armstrong no.by recursion
#include <iostream>
#include <vector>
using namespace std;
int pow(int a,int d){
    if(d==0)return 1;
    if (d%2==0)
    {
        int result=pow(a,d/2);
        return result * result;
    }
    else{
        int result=pow(a,(d-1)/2);
        return a*result*result;
    }
    
}
bool f(int a, int *p, int temp,int d)
{
    if (a >= 0 and a <= 9)
    {
        int last = (a % 10);
        *p += pow(last,d);
        return 1;
    }
    int last = (a % 10);
    *p += pow(last,d);
    f(a / 10, p, temp,d);
    return *p == temp;
}
int main()
{
    int a;
    cin >> a;
    int p = 0, temp = a,h=a;
    int d=0;
    while (h>0)
    {
        d++;
        h/=10;
    }
    
    cout << f(a, &p, temp,d);
    return 0;
}