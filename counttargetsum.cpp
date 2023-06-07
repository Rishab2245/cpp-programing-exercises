// given an increasing array and needed to find the pair for the targeted sum
#include <iostream>
#include <vector>
using namespace std;
int sum(int a[], int n, int x)
{
    int i = 0, j = n - 1,count=0;
    while (i < j)
    {
        if (a[i] + a[j] == x)
        {
            count++;
            i++;
            j--;
        }
        else if (a[i] + a[j] < x)
        {
            i++;
        }
        else if (a[i] + a[j] > x)
        {
            j--;
        }
    }
    return count;
}
int main()
{
    int n;
    cin >> n;
    cout << "Enter the elements of the array";
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int x;
    cout << "Enter the targeted sum";
    cin >> x;

    cout << sum(a, n, x);

    return 0;
}