//removing a perticular character from a string with recursion 
#include<iostream>
#include<vector>
using namespace std;
string remove(string s,int idx,int n,char a){
    if (idx==n)return "";
    string cur="";
    cur+=s[idx];
    return (s[idx]==a?"":cur)+remove(s,idx+1,n,a);
    
}
int main()  
{
    string str;
    cin>>str;
    char a;
    cin>>a;
    string h = remove(str,0,str.size(),a);
    cout<<h;
    return 0;
}