#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cout << "enter the no of rows and coloums ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i+1; j++)
        {
            cout << " ";
        }
        for (int k = 1; k <= i; k++)
        {
            cout << "*";
        }
        cout << endl;
    }
    for (int i = 1; i <= n-1; i++)
    {
        for (int j = 1; j <= i+1; j++)
        {
            cout <<" ";
        }
        for (int k = 1; k <= n-i; k++)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}
