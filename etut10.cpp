// printing a cross pattern 
#include <iostream>
using namespace std;
/*int main()
{

    int n, i, k, j;
    cin >> n;

    for (i = 1, k = 2 * n - 3; i <= n; i++, k -= 2)
    {
        for (j = 0; j < i - 1; j++)
        {
            cout << " ";
        }
        cout << "*";
        for (int i = 1; i <= k; i++)
        {
            cout << " ";
        }
        if (i == n)
        {
            cout << "\n";
            break;
        }

        cout << "*\n";
    }
    for (i = i - 1, k = k + 2; i > 0; i--, k += 2)
    {
        for (j = 0; j < i - 1; j++)
        {
            cout << " ";
        }
        cout << "*";
        for (int i = 1; i <= k; i++)
        {
            cout << " ";
        }
        cout << "*\n";
    }

    return 0;
}
*/
int main(){
    int n,i,j;
    cin>>n;
    for(i=1;i<=2*n-1;i++){
        for (j = 1; j <=2*n-1; j++)
        {
           if (i==j || i+j==2*n)
           {
                cout<<"*";
           }
           else{
                cout<<" ";
           }
           
        }
        cout<<endl;
        
    }
    return 0;
}