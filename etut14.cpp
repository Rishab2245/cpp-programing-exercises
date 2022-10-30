// finding the prime no.s whose sum is entered no.
// method 1.
/*
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the no. :";
    cin >> n;
    for (int i = 2; i <= n / 2; i++)
    {
        int flag = 0;
        for (int j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                flag++;
            }
        }
        if (flag == 0)
        {
            for (int j = 2; j < (n - i); j++)
            {
                if ((n - i) % j == 0)
                {
                    flag++;
                }
            }
            if (flag == 0)
            {
                cout << n << " = " << i << " + " << n - i << endl;
            }
        }
    }
}
*/
// method 2.
#include <iostream>
using namespace std;
int main()
{
    int num, i, j;
    int f1 = 1, f2 = 1, f3 = 0;
    cout << "Enter a +ve Integar : ";
    cin >> num;
    i = 3;
    do
    {
        f1 = 1;
        f2 = 1;
        j = 2;
        do
        {
            if (i % j == 0)
            {
                f1 = 0;
                j = i;
            }
            j = 2;
            do
            {
                if ((num - i) % j == 0)
                {
                    f2 = 0;
                    j = num - i;
                }
                j++;
            } while (j < num - i);
            if (f1 == 1 && f2 == 1)
            {
                cout << num << " = " << i << " + " << num - i << endl;
                f3 = 1;
            }
            j++;
        } while (j < i);
        i++;
    } while (i <= num / 2);
    if (f3 == 0)
    {
        cout << num << " can not be expressed as sum of two prime numbers.";
    }
}