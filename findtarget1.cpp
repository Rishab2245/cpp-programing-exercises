// finding the target that is present in the matrix by binart search
#include <iostream>
#include <vector>
using namespace std;
int find(vector<vector<int>>&a, int n, int m, int target)
{
    for (int i = 0; i < n; i++)
    {
        
        int lo = 0;
        int hi = m*n - 1;
        while (lo <= hi)
        {
            int mid = lo + (hi - lo) / 2;
            int x=mid/m;
            int y=mid%m;

            if (a[x][y] == target)
            {
                return 1;
            }

            if (a[x][y] > target)
            {
                hi = mid - 1;
            }
            else
            {
                lo = mid + 1;
            }
        }
    }

    return 0;
}
int main()
{
    int n, m;
    cin >> n >> m;
   vector<vector<int>>a(n,vector<int>(m));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }
    int target;
    cin >> target;
    cout << find(a, n, m, target);

    return 0;
}