#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter the number ";
    cin >> n;
    int lsp = 1;
    int nsp = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j < n - i + 1; j++)
        {
            cout << " ";
        }
        for (int m = 1; m < n; m++)
        {
            if (m + i == n + 1)
            {
                cout << "*";
            }
        }

        for (int l = 1; l < lsp + 1; l++)
        {
            cout << " ";
        }
        lsp = lsp + 2;
        cout << "*";
        cout << endl;
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j < nsp; j++)
        {
            cout << " ";
        }
        nsp += 1;
        for (int l = 1; l <= n - 1; l++)
        {
            if (i == l)
                cout << "*";
        }

        for (int k = 2 * n - 1; k >= 2 * i - 1; k--)
        {
            cout << " ";
        }
        cout << "*";

        cout << endl;
    }

    return 0;
}
/*
output will look like 
enter the number 5
     *
   *   *
  *     *
 *       *
*         *
*         *
 *       *
  *     *
   *   *
     *
      
     */