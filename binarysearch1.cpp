#include <iostream>
#include <vector>
using namespace std;
int lowerbound(int a[], int n, int target, int lo, int hi)
{
    int ans = -1;
    while (lo <= hi)
    {
        int mid = lo + (hi - lo) / 2;
        if (a[mid] < target)
        {
            lo = mid + 1;
        }
        else
        {
            hi = mid - 1;
            ans = mid;
        }
    }
    return ans;
}
int upperbound(int a[], int n, int target, int lo, int hi)
{
    int ans = -1;
    while (lo <= hi)
    {
        int mid = lo + (hi - lo) / 2;
        if (a[mid] > target)
        {
            ans = mid;
            hi = mid - 1;
        }
        else
        {
            lo = mid + 1;
        }
    }
    return ans;
}
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int target;
    cin >> target;
    vector<int> v(2, -1);
    int lo = lowerbound(a, n, target, 0, n - 1);
    int up = upperbound(a, n, target, 0, n - 1);
    if (a[lo] == target)
    {
        v[0] = lo;
        v[1] = up - 1;
    }

    for (int i = 0; i < 2; i++)
    {
        cout << v[i] << " ";
    }
    return 0;
}