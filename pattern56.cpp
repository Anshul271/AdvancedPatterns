#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout << "enter n " << endl;
    cin >> n;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j <= i - 1; j++)
        {
            cout << "  ";
        }
        cout << " * ";
        cout << endl;
    }
    for(int i=0;i<n-3;i++){
        for(int j=i;j<=n-4;j++){
            cout<<"  ";
        }
        cout<<" * ";
        cout<<endl;
    }
       for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j <= i - 1; j++)
        {
            cout << "  ";
        }
        cout << " * ";
        cout << endl;
    }
    for(int i=0;i<n-3;i++){
        for(int j=i;j<=n-4;j++){
            cout<<"  ";
        }
        cout<<" * ";
        cout<<endl;
    }
       for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j <= i - 1; j++)
        {
            cout << "  ";
        }
        cout << " * ";
        cout << endl;
    }
    for(int i=0;i<n-3;i++){
        for(int j=i;j<=n-4;j++){
            cout<<"  ";
        }
        cout<<" * ";
        cout<<endl;
    }
    // cout << "  ";
    cout << " * " << endl;
    // cout << " * " << endl;
}