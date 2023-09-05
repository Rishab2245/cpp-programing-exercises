//
#include<iostream>
#include<vector>
using namespace std;
string f(string a,int i){
    if(i==a.length()){
        return "";
    }
    if(i==0){
        string t="";
        t+=a[i];
        return t+f(a,i+1);
    }
    else if(a[i]!=a[i-1]){
            string t="";
        t+=a[i];
        return t+f(a,i+1);
    }
    else{
        return f(a,i+1);
    }
}
int main()
{
    string a;
    cin>>a;
    string b=f(a,0);
    cout<<b;
    return 0;
}