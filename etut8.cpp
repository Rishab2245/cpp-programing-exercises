#include <iostream>
using namespace std;
void main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {

        for (int j = 0; j < n - i; j++)
        {
            cout << " ";
        }

        for (int j = 1; j <= (2 * i - 1); j++)
        {
            cout << j;
            if (i == j)
            {
                for (int j = i - 1; j > 0; j--)
                {
                    cout << j;
                }
                break;
            }
        }
        cout << endl;
    }
    
}