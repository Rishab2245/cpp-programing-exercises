//lfinding the target in sorted rotated array where the 
#include <iostream>
#include <vector>
using namespace std;
int find(int a[], int n,int target)
{
    int lo = 0;
    int hi = n - 1;
    if (a[lo]==target or a[hi]==target)
    {
        return 1;
    }
    
    while (a[lo]==a[hi]) 
    {
        lo++;
        hi--;
    }
    
    while (lo <= hi)
    {
        int mid = lo + (hi - lo) / 2;
        if (a[mid]==target) 
        {
            return 1;
        }
        
        if (a[mid] >= a[lo])
        {
            if (target >= a[lo] and target <= a[mid])
            {

                hi = mid - 1;
            }
            else
            {
                lo = mid + 1;
            }
        }
        else
        {
            if (target <= a[hi] and target >= a[mid])
            {

                lo = mid + 1;
            }
            else
            {
                hi = mid - 1;
            }
        }

    }
    return 0;
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
    int target;
    cin>>target;
    cout << find(a, n,target) << endl;

    return 0;
}