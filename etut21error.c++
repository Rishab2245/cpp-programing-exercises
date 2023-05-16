// for sorting an array incompelete
#include <iostream>
using namespace std;
#include <vector>
void sort(vector<int> &v)
{
    vector<int> m;
    int min;

    for (int i = 0, j = 0,k,temp; i < v.size(); i++, j++)
    {

         min = INT32_MAX;
        for ( k = 0; i < v.size(); k++)
        {
            if (v[k] < min && v[k]!=-1)
            {
                min = v[k];
                temp=k;
            }
        }
        v[temp] = -1;
        m[j] = min;
    }
    for (int i = 0; i < v.size(); i++)
    {
        v[i]=m[i];
    }
}
int main()
{
    vector<int> v;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int ele;
        cin >> ele;
        v.push_back(ele);
    }
    sort(v);
    for (int ele:v)
    {
        cout <<ele<< " ";
    }
    cout<<endl;

    return 0;
}