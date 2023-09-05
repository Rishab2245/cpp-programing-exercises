// findnd the peak element in the array where is the peaks more than one like mountain array
#include <iostream>
#include <vector>
using namespace std;
int find(int a[], int n)
{
    int lo = 0;
    int hi = n - 1;

    while (lo <= hi)
    {
        int mid = lo + (hi - lo) / 2;
        if (mid == 0)
        {
            if (a[mid] > a[mid + 1])
            {
                return 0;
            }
            else
            {
                return 1;
            }
        }
        else if (mid == n - 1)
        {
            if (a[mid] > a[mid - 1])
            {
                return n - 1;
            }
            else
            {
                return n - 2;
            }
        }
        else
        {
            if (a[mid] > a[mid + 1] and a[mid] > a[mid - 1])
            {
                return mid;
            }
            else if (a[mid] > a[mid - 1])
            {
                lo = mid + 1;
            }
            else
            {
                hi = mid - 1;
            }
        }
    }
    return -1;
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
    cout << find(a, n) << endl;
    return 0;
}