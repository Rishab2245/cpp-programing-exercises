// the problem is to count all the possible paths on an mxn grid from top left to bottom right
#include <iostream>
#include <vector>
using namespace std;
void f(int m, int n, int i, int j, int *p)
{
      // Reached beyond the grid boundaries, terminate recursion
    if (i >= m or j >= n)
    {
       return;
       }
    if (i == m - 1 and j == n - 1)
    {
        *p += 1;
        return;
    }
    
        f(m, n, i, j + 1, p);
        f(m, n, i + 1, j, p);
    
}
int main()
{
    int m, n;
    cin>>m>>n;

    int path = 0;
    f(m, n, 0, 0, &path);
    cout << "------" << path << "------";
    return 0;
}