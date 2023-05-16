#include <iostream>
using namespace std;
int small(int arr[], int n)
{
    int k = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < k)
        {
            k = arr[i];
        }
    }
    return k;
}
int large(int arr[], int n)
{
    int k = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > k)
        {
            k = arr[i];
        }
    }
    return k;
}
int main()
{
    int n, a[100];
    cout << "Enter the size of the array :";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << "the smallest no. is :" << small(a, n) << "\nthe largest no, is :" << large(a, n) << "\nthe sum of largest and smallest no. in array is :" << small(a, n) + large(a, n);

    return 0;
}