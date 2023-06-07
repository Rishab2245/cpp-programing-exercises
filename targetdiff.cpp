//
#include <iostream>
#include <vector>
using namespace std;
bool checkthetargetsum(int a[], int n, int x)
{
    int i = 0, j = 1;
    while (i < n and j < n)
    {
        if (abs(a[i] - a[j]) == x)
        {
            return true;
        }
        else if (abs(a[i] - a[j]) > x)
        {
            i++;
        }
        else
        {
            j++;
        }
    }
    return false;
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
    int x;
    cin >> x;
    cout << checkthetargetsum(a, n, x);

    return 0;
}