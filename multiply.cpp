// multiplication of all numbers except for self makes a array of its multiple values and
#include <iostream>
#include <vector>
using namespace std;
vector<int> multiplication_array(vector<int> &a)
{
    vector<int> pre(a.size()), post(a.size()), ans(a.size());
    pre[0]=a[0];
    post[post.size()-1]=a[a.size() - 1];

    for (int i = 1; i < a.size(); i++)
    {
        pre[i] = a[i] * pre[i - 1];
    }
    for (int i = a.size() - 2; i >= 0; i--)
    {
        post[i] = a[i] * post[i + 1];
    }
    for (int i = 0; i < a.size(); i++)
    {
        if (i == 0)
        {
            ans[i] = post[i + 1];
        }
        else if (i == (a.size() - 1))
        {
            ans[i] = pre[i - 1];
        }
        else
        {

            int mul = pre[i - 1] * post[i + 1];
            ans[i] = mul;
        }
    }
    return ans;
}
int main()
{
    int n;
    cout << "enter the size of the array" << endl;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        v.push_back(a);
    }
    vector<int> ans = multiplication_array(v);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }

    return 0;
}