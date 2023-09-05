#include <iostream>
#include <vector>
using namespace std;
void f(string a, int i, string sub_string)
{
    if (i == a.size())
    {
    
        cout<<sub_string<<" ";
        return;
    }
    string temp = "";
    temp += a[i];
    f(a, i + 1,sub_string + temp);
    f(a, i + 1, sub_string);
    
    
}
int main()
{

    string a;
    cin >> a;
    string sub_string="";
    f(a,0,sub_string);
   
   

    return 0;
}