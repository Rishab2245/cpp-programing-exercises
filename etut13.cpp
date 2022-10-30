// printing a pattern of prime no.s in a triangle
// method 1
/*#include <iostream>
using namespace std;
int main()
{
    int n, k = 1, i, flag, j, m;
    cout << "Enter the no. of rows :";
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        for (int j = 1; j <= (n - i); j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= i; j++)
        {
            while (k > 0)
            {
                k++;
                for (flag = 0, m = 2; m < k; m++)
                {
                    if (k % m == 0)
                    {
                        flag++;
                    }
                }
                if (flag == 0)
                {
                    cout << k << " ";
                    break;
                }
            }

        }
        cout << endl;
    }
    return 0;
}*/

// method 2

#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int x1;
    int x2;
    int x3;
    int Number = 2;
    int Banner = 0;
    cout << "Please enter the no of lines ";
    cin >> x1;
    int d = x1;
    for (x2 = 1; x2 <= x1; x2++)
    {
        for (int e = 1; e <= d; e++)
        {
            cout << " ";
        }

        for (x3 = 0; x3 != x2;)
        {
            Banner = 0;
            for (int k = 2; k < Number; k++)
            {
                if ((Number % k) == 0)
                    Banner = 1;
            }
            if (Banner == 0)
            {
                x3++;
                cout << Number << " ";
            }
            Number++;
        }
        cout << "\n";
        d--;
    }
    getch();
    return 0;
}
