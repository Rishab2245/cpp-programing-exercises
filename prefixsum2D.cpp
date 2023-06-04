// given a matrix a of dimension nxm and 2 coordinates (l2,r2) and (l2,r2) . Return the sum of the rectangle from (l1,r1 to (l2,r2))
#include <iostream>
#include <vector>
using namespace std;

int rectanglesum(vector<vector<int>> &a, int l1, int r1, int l2, int r2)
{   int sum = 0;
    for (int i = 0; i < a.size(); i++)
    {
        for (int j = 1; j < a[0].size(); j++)
        {
            a[i][j] += a[i][j - 1];
        }
    }
    for (int j = 0; j < a[0].size(); j++)
    {
        for (int i = 1; i < a.size(); i++)
        {
            a[i][j] += a[i-1][j];
        }
    }
    int topleft_sum=0,left_sum=0,top_sum=0;
    if(l1!=0)top_sum=a[l1-1][r2];
    if(r1!=0)left_sum=a[l2][r1-1];
    if(l1!=0 && r1!=0)topleft_sum=a[l1-1][r1-1];
    sum=a[l2][r2]-left_sum - top_sum + topleft_sum;
    // for (int i = l1; i <= l2; i++)
    // {
    //     if (r1 != 0)
    //     {
    //         sum += (a[i][r2] - a[i][r1 - 1]);
    //     }
    //     else
    //     {
    //         sum += a[i][r2];
    //     }
    // }
    return sum;
}

int main()
{
    int n, m;
    cin >> n >> m;
    vector<vector<int>> matrix(n, vector<int>(m));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> matrix[i][j];
        }
    }
    int l1, r1, l2, r2;
    cin >> l1 >> r1 >> l2 >> r2;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout<< matrix[i][j]<<" ";
        }
        cout<<endl;
    }
    int sum = rectanglesum(matrix, l1, r1, l2, r2);
    
    cout << "the sum of the elements between l1 r1 and l2 r2 is " << sum << endl;

    return 0;
}