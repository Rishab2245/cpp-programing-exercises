//find the all possible combinations made
#include<iostream>
#include<vector>
using namespace std;
void f(string a,int i,string temp,vector<string>&result,vector<string>&v){
    if (i==a.size())
    {
        result.push_back(temp);
    }
    int digit=a[i]-'0';
    if (digit<=1)
    {
        f(a,i+1,temp,result,v);
    }
    for (int j = 0; j < v[digit].size(); j++)
    {
        f(a,i+1,temp+v[digit][j],result,v);
    }
    
    
    
}
int main()
{
    string a;
    cin>>a;
    vector<string>result;
    vector<string>v={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
    f(a,0,"",result,v);
    for (int  i = 0; i < result.size(); i++)
    {
        cout<<result[i]<<" ";
    }
    
    return 0;
}