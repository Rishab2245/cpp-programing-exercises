// checking for the perfect matrix
#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int n, m;
    cout << "Enter the size of the array :";
    cin >> m >> n;
    int a[m][n];
    cout << "enter the elements of the array";
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
        cout << endl;
    }
    int flag = 0;
    for (int i = 0; i < max(m, n); i++)
    {
        if (n == max(m, n))
        {
            for (int j = 0; j < min(m, n); i++)
            {
                if (j == m - 1 || i + j == n - 1)
                {
                    break;
                }

                if (a[j][i + j] != a[j + 1][i + j + 1])
                {
                    flag = 1;
                    break;
                }
                if (a[m - 1 - j][n - i - 1 - j] != a[m - 1 - j - 1][n - i - 1 - j - 1])
                {
                    flag = 1;
                    break;
                }
            }
            if (flag == 1)
            {
                break;
            }
        }
        else
        {
            for (int j = 0; j < min(m, n); i++)
            {
                if (j == n - 1 || i + j == m - 1)
                {
                    break;
                }

                if (a[j + i][j] != a[j + i + 1][j + 1])
                {
                    flag = 1;
                    break;
                }
                if (a[m - i - 1 - j][n - 1 - j] != a[m - i - 1 - j - 1][n - 1 - j - 1])
                {
                    flag = 1;
                    break;
                }
            }
            if (flag == 1)
            {
                break;
            }
        }
    }
    if (flag == 1)
    {
        cout << "True";
    }
    else
    {
        cout << "false";
    }

    return 0;
}