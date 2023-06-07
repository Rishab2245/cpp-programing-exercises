#include<iostream>
#include<vector>
using namespace std;
vector<int> square(vector<int>&a){
    int i=0,j=a.size()-1,k=a.size()-1;
    vector<int> result(a.size());
    while (i<=j) 
    {
        if (abs(a[i])>=abs(a[j]))
        {
            result[k]=a[i]*a[i];
            i++;
            k--;
        }
        else if(abs(a[i])<abs(a[j])){
            result[k]=a[j]*a[j];
            j--;
            k--;
        }
        
    }
    return result; 
    
}
int main(){
    int n;
    cout<<"Enter the size of the array";
    cin>>n;
    vector<int>a(n);
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    vector <int> result = square(a);
    for (int i = 0; i < n; i++)
    {
        cout<<result[i]<<" ";
    }
    return 0;
}