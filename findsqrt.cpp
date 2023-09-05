//
#include <iostream>
#include <vector>
using namespace std;
int sq(int n)
{
    int lo = 0;
    int hi = n / 2, ans = -1;
    while (lo <= hi)
    {
        int mid = lo + (hi - lo) / 2;
        if (mid * mid <= n)
        {
            ans = mid;
            lo = mid + 1;
        }
        else
        {
            hi = mid - 1;
        }
    }
    return ans;
}
int main()
{
    int n;
    cin >> n;
    cout << sq(n);
    return 0;
}