// sorting an array of zeroes
#include <iostream>
#include <vector>
using namespace std;
void sort(vector<int> &a)
{
    int n = a.size();
    for (int i = 0; i < n; i++)
    {
        bool flag = false;
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (a[j] == 0 and a[j + 1] != 0)
            {
                swap(a[j], a[j + 1]);
                flag = true;
            }
        }
        if (!flag)
        {
            break;
        }
    }
}
int main()
{
    int n;
    cin >> n;
    vector<int> a;
    for (int i = 0; i < n; i++)
    {
        int t;
        cin >> t;
        a.push_back(t);
    }
    sort(a);
    for (int i = 0; i < a.size(); i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}