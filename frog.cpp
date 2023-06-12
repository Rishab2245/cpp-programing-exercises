#include <bits/stdc++.h>
using namespace std;
int best(vector<int>&heights , int n , int idx){
 if(idx >= n)return 0;
 return min(best(heights , n , idx + 1) + abs(heights[min(idx+1  , n-1)] - heights[idx]) , best(heights , n , idx + 2) + abs(heights[min(n-1 ,idx+2)] - heights[idx]));
}
int main() {
    int n;
    cin>>n;
    vector<int>heights(n);
    for(int i = 0 ; i < n ; i++){
        cin>>heights[i];
    }
    cout<<best(heights , n , 0)<<endl;   
}