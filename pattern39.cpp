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
        for (int j = 1; j <=n-i; j++)
        {
            cout << " ";
        }
        for (int k =i; k >=1; k--)
        {
            cout<<char(64+k);
        }
        for(int q=1;q<=i-1;q++){
        cout<<char(64+q+1);
        }
        
        cout << endl;  
    }
    return 0;
}
/*
output will look like
enter the no of rows and coloums 6
     A
    BAB
   CBABC
  DCBABCD
 EDCBABCDE
FEDCBABCDEF
*/