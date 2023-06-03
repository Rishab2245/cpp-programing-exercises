// finding the no.of odd sum subarrays in a given array of
#include <iostream>
#include <vector>
using namespace std;
int count(vector<int> &a)
{
    vector<int> prefix(a.size() + 1,0);
    
    int count = 0;
    for (int i = 1; i < prefix.size(); i++)
    {
        prefix[i] = prefix[i - 1] + a[i - 1];
    } 
    for (int i = 1; i < prefix.size(); i++)
    {
        for (int j = i; j < prefix.size(); j++)
        {
            if ((prefix[j] - prefix[i - 1]) % 2 != 0)
            {
                count++;
            }
        }
    }
    return count;
}
int main()
{
    int n;
    cout << "enter the size of the array" << endl;
    cin >> n;
    vector<int> a;
    for (int i = 0; i < n; i++)
    {
        int b;
        cin >> b;
        a.push_back(b);
    }
    cout<<count(a);

    return 0;
}