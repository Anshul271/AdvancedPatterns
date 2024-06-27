#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cout << "enter the no of rows and coloums ";
    cin >> n;
    m = n - 1;
    int nsp = 1;
    for (int l = 1; l <= 2 * n - 1; l++)
    {
        cout << l;
    }
    cout << endl;
    for (int i = 1; i <= m; i++)
    {
        int a = 1;
        for (int k = 1; k <= m - i + 1; k++)
        {

            cout << a;
            a++;
        }
        for (int j = 1; j <= nsp; j++)
        {
            cout << " ";
            a++;
        }
        nsp += 2;
        for (int q = 1; q <= m - i + 1; q++)
        {
            cout << a;
            a++;
        }

        cout << endl;
    }
    return 0;
}
/*
output
enter the no of rows and coloums 6
1234567891011
12345 7891011
1234   891011
123     91011
12       1011
1         11
*/