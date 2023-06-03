// printing the elements of the matrix in spiral format
#include <iostream>
#include <vector>
using namespace std;
void spiral(vector<vector<int>> &mar)
{

    int top = 0;
    int left = 0;
    int bottem = mar.size() - 1;
    int right = mar[0].size() - 1;
    int direction = 0;
    while (top <= bottem && left <= right)
    {

        if (direction == 0)
        {
            for (int i = left; i <= right; i++)
            {
                cout << mar[top][i] << " ";
            }
            top++;
        }
        else if (direction == 1)
        {
            for (int i = top; i <= bottem; i++)
            {
                cout << mar[i][right] << " ";
            }
            right--;
        }
        else if (direction == 2)
        {
            for (int i = right; i >= left; i--)
            {
                cout << mar[bottem][i] << " ";
            }
            bottem--;
        }
        else
        {
            for (int i = bottem; i >= top; i--)
            {
                cout << mar[i][left] << " ";
            }
            left++;
        }
        direction = (direction + 1) % 4;
    }
}
int main()
{
    int n, m;
    cin >> n >> m;
    vector<vector<int>> mar(n, vector<int>(m));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> mar[i][j];
        }
    }
    spiral(mar);
    return 0;
}