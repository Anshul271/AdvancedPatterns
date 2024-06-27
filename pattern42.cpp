#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cout << "enter the no of rows and coloums ";
    cin >> n;
    int nsp = 1;
    cout << endl;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= nsp; j++)
        {
            cout << " ";
        }
        nsp += 2;
        for (int l = 1; l <= n - 1; l++)
        {
            if (i == l)
                cout << "*";
        }

        for (int k = 2 * 2 * n - 1; k >= 2 * 2 * i - 1; k--)
        {
            cout << " ";
        }
        cout << "*";

        cout << endl;
    }

    return 0;
}
/*
Output will look like
enter the no of rows and coloumns 7
 *                         *
   *                     *
     *                 *
       *             *
         *         *
           *     *
              *
*/