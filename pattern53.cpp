#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cout << "enter the no of rows and coloums ";
    cin >> n;
    int a=1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <=  i; j++)
        {
            cout << " ";
        }
        for (int k = 2*n-1; k >=2*i-1; k--)
        {
            cout<<"*";
        }
        cout << endl;
    }
     for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i+1; j++)
        {
            cout << " ";
        }
        for (int k = 1; k <= 2*i-1; k++)
        {
            cout<<"*";
        }
        cout << endl;
    }
    return 0;
}
