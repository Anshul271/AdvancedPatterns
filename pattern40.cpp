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
        cout << char(64 + l);
    }
    cout << endl;
    for (int i = 1; i <= m; i++)
    {
        char a = 'A';
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
Output will look like
enter the no of rows and columns 7
ABCDEFGHIJKLM
ABCDEF HIJKLM
ABCDE   IJKLM
ABCD     JKLM
ABC       KLM
AB         LM
A           M
*/
