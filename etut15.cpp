#include <iostream>
using namespace std;
int count(int arr[], int n)
{
    // we will count the number of odd elements and subtract it from n which will give
    //  even elements
    int count_odd = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 != 0)
        {
            count_odd++;
        }
    }
    return count_odd;
}
int main()
{
    int a[100], n;
    cout << "enter the size of the array";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    cout << "the odd no.s is :" << count(a, n) << "\nthe even no.s is :" << n - count(a, n);
    return 0;
}