// making row and colume of the matrix zero if the element is zero
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int m, n;
    cout << "Enter the size of the array m,n:";
    cin >> m >> n;
    int a[m][n];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
        cout << "\n";
    }
    vector<vector<int>> b(m, vector<int>(n, -1));
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (a[i][j] == 0)
            {
                b[i][j] = 0;
            }
        }
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (b[i][j] == 0)
            {
                for (int k = 0; k < m; k++)
                {
                    a[k][j] = 0;
                }
                for (int k = 0; k < n; k++)
                {
                    a[i][k] = 0;
                }
            }
        }
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << "\n";
    }

    return 0;
}
//can do by pairs too