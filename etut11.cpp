// printing a + pattern
#include <iostream>
using namespace std;
int main()
{
    int n, i, j;
    cout << "Enter a odd no. for that much rows :";
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            if ((i == (n + 1) / 2) || (j == (n + 1) / 2))
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
    return 0;
}