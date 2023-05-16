// program for rotating an array by 90 degree in clock wise direction
#include <iostream>
using namespace std;
int main()
{
    int m, n;
    printf("Enter the size of the array :");
    cin >> m >> n;
    int a[m][n];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
        printf("\n");
    }
    for (int i = 0, k = 0; i < m; i++, k++)
    {
        for (int j = 1 + k; j < n; j++)
        {
            swap(a[i][j], a[j][i]);
        }
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n/2; j++)
        {
            swap(a[i][j], a[i][n - j - 1]);
        }
    }

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}