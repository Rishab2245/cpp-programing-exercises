// search the first occurancer of the target element
#include <iostream>
#include <vector>
using namespace std;
int binarysearch(int a[], int n, int target, int lo, int hi)
{   int ans=-1;
    while (lo <= hi)
    {
        int mid = lo + (hi - lo) / 2;
        if (a[mid] == target)
        {
            ans = a[mid];
            hi = mid - 1;
        }
        else if (a[mid] < target)
        {
            lo = mid + 1;
        }
        else
            hi = mid - 1;
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
    int lo = 0, hi = n - 1;
    cout << binarysearch(a, n, target, lo, hi);
    return 0;
}