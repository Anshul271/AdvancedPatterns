#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout << "enter the number ";
    cin >> n;
    for (int i = 1; i <= 2 * n - 1; i++)
    {
        int f = n;
        for (int j = 1; j <= 2 * n - 1; j++)
        {
            cout << f << " ";

            if (i > j)
            {
                f--;
            }
            if (i + j >= 2 * n)
                f++;
        }
        cout << endl;
    }
    return 0;
}