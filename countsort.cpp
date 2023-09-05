// count sort algorithm
#include <iostream>
#include <vector>
using namespace std;
void countsort(vector<int> &a, int n)
{
    int max_n = 0;
    for (int b : a)
    {
        max_n = max(max_n, b);
    }
    vector<int> f(max_n + 1, 0);
    for (int i = 0; i < n; i++)
    {
        f[a[i]]++;
    }
    for (int i = 1; i <= max_n; i++)
    {
        f[i] += f[i - 1];
    }
    int ans[n];
    for (int i = n - 1; i >= 0; i--)
    {
        ans[--f[a[i]]] = a[i];
    }
    for (int i = 0; i < n; i++)
    {
        a[i] = ans[i];
    }
}
int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    countsort(a, n);
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}