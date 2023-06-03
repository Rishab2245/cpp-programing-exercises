////mearging the all ranges so that they will never overlap
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector<vector<int>> mearge(vector<vector<int>>&var){

            int j=0,count=0;
            vector<vector<int>>ans;
            // sort(var.begin(), var.end());
            
            
            for (int i = 0; i < var.size(); i++)
            {
                for (int j = i+1; j < var.size(); j++)                {
                    if (var[j][0]<var[i][0])
                    {
                        vector<int> temp=var[i];
                        var[i]=var[j];
                        var[j]=temp;
                    }
                    
                }
                
            }
            cout<<"sorted array\n";
            for (int i = 0; i < var.size(); i++)
            {
                for (int j = 0; j < var[i].size(); j++)
                {
                    cout<<var[i][j]<<"";
                }
                cout<<endl;
                
            }
            ans.push_back(var[0]);
            
            
            
            
            
            for (int i = 1; i < var.size(); i++)
            {
                if(ans[j][1]>=var[i][0] && var[i][0]>=ans[j][0]){
                    ans[j][1]=max(ans[j][1],var[i][1]);
                    count++;
                }
                
            
            else{
                j++;
                ans.push_back(var[i]);
            }
            }
            return ans;
            

}
int main()
{   int n;
    cout<<"enter the size of the array";
    cin>>n;
    vector<vector<int>>var(n);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 2; j++)
        {   int a;
            cin>>a;
            var[i].push_back(a);
        }
        cout<<endl;
        
    }
    vector<vector<int>> ans=mearge(var);
    cout<<"array after the mearging";
    for (int i = 0; i < ans.size(); i++)
    {
        for (int j = 0; j < ans[i].size(); j++)
        {   
            cout<<ans[i][j];
        }
        cout<<endl;
        
    }
        
    return 0;
}