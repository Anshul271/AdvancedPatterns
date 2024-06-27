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
output will be
enter the number 8
8 8 8 8 8 8 8 8 8 8 8 8 8 8 8 
8 7 7 7 7 7 7 7 7 7 7 7 7 7 8 
8 7 6 6 6 6 6 6 6 6 6 6 6 7 8 
8 7 6 5 5 5 5 5 5 5 5 5 6 7 8 
8 7 6 5 4 4 4 4 4 4 4 5 6 7 8 
8 7 6 5 4 3 3 3 3 3 4 5 6 7 8 
8 7 6 5 4 3 2 2 2 3 4 5 6 7 8 
8 7 6 5 4 3 2 1 2 3 4 5 6 7 8 
8 7 6 5 4 3 2 2 2 3 4 5 6 7 8 
8 7 6 5 4 3 3 3 3 3 4 5 6 7 8 
8 7 6 5 4 4 4 4 4 4 4 5 6 7 8 
8 7 6 5 5 5 5 5 5 5 5 5 6 7 8 
8 7 6 6 6 6 6 6 6 6 6 6 6 7 8 
8 7 7 7 7 7 7 7 7 7 7 7 7 7 8 
8 8 8 8 8 8 8 8 8 8 8 8 8 8 8 
