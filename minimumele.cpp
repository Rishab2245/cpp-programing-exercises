// finding the minimum element in the given array sorted rotatec array
#include <iostream>
#include <vector>
using namespace std;
int min(int a[], int n)
{
    int lo = 0;
    int hi = n - 1;
    int ans = -1;
    if (a[lo] < a[hi])
    {
        return lo;
    }

    while (lo <= hi)
    {
        int mid = lo + (hi - lo) / 2;
        if (a[mid] > a[mid + 1])
        {
            return mid + 1;
        }
        if (a[mid] < a[mid - 1])
        {
            return mid;
        }

        if (a[mid] > a[0])
        {
            lo = mid + 1;
        }
        else
        {

            hi = mid - 1;
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
    cout << min(a, n) << endl;

    return 0;
}