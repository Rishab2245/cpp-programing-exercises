// lfinding the target in sorted rotated array where the
#include <iostream>
#include <vector>
using namespace std;
int find(int a[], int n)
{
    int lo = 0;
    int hi = n - 1;
    int max1 = 0;

    while (lo <= hi)
    {
        int mid = lo + (hi - lo) / 2;

        if (a[mid] > a[mid - 1])
        {

            max1 = max(mid, max1);

            lo = mid + 1;
        }
        else
        {
            hi = mid - 1;
        }
    }
    return max1;
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