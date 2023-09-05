#include <bits/stdc++.h>
using namespace std;

int partition(int num[], int l, int r);

// This function returns K'th smallest element in arr[l..r]
// using QuickSort based method. ASSUMPTION: ALL ELEMENTS IN
// ARR[] ARE DISTINCT
int kthSmallest(int num[], int l, int r, int k)
{
    // If k is smaller than number of elements in array
    if (k > 0 && k <= r - l + 1)
    {

        // Partition the array around last element and get
        // position of pivot element in sorted array
        int p = partition(num, l, r);

        // If position is same as k
        if (p == k - 1)
            return num[p];
        if (p > k - 1) // If position is more, recur
                       // for left subarray
            return kthSmallest(num, l, p - 1, k);

        // Else recur for right subarray
        return kthSmallest(num, p + 1, r, k);
    }

    // If k is more than number of elements in array
    return INT_MAX;
}

void swap(int *p, int *q)
{
    int temp = *p;
    *p = *q;
    *q = temp;
}

// Standard partition process of QuickSort(). It considers
// the last element as pivot and moves all smaller element
// to left of it and greater elements to right
int partition(int num[], int l, int r)
{
    int a = num[r], i = l;
    for (int j = l; j <= r - 1; j++)
    {
        if (num[j] <= a)
        {
            swap(&num[i], &num[j]);
            i++;
        }
    }

    swap(&num[i], &num[r]);
    return i;
}

// Driver's code
int main()
{
    int n, k;
    cout << "Enter the size of array" << endl;
    cin >> n;
    int num[n];
    cout << "Enter the elements of array" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> num[i];
    }
    cout << "Enter the value for k" << endl;
    cin >> k;

    cout << "K'th smallest element is "
         << kthSmallest(num, 0, n - 1, k);
    return 0;
}
// time complexity is order of n in best case and order of n2 in worst case