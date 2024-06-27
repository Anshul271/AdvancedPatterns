#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<" enter the number ";
    cin >> n;
    // Printing entire pattern except the bottommost star
    for (int i = 0; i < n - 1; ++i)
    {
        for (int j = 0; j < i; ++j)
        {
            cout << " ";
        }
        cout << "*";
        int m = 2 * (n - i - 1);
        for (int j = 0; j < m - 1; ++j)
        {
            cout << " ";
        }
        cout << "*" << endl;
    }
    // Printing last star
    for (int i = 1; i <= n; ++i)
    {
        if (i == n)
            cout << "*";
        else
            cout << " ";
    }
    return 0;
}
/*
output will look like
enter the number 6
*         *
 *       *
  *     *
   *   *
    * *
     *
     
*/