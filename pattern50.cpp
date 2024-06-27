#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the number ";
    cin>>n;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <=n-i; j++)
		{
cout<<" ";
		}

		for (int k=i-1; k >= 1; k--)
		{
			printf("*");
		}
		for (int p = 1; p <=n-i+1; p++)
		{
			printf(" ");
		}
		
		for (int e= i-1; e>= 1; e--)
		{
			printf("*");
		}

		printf("\n");
	}
    for(int i=1;i<2*n;i++){
    cout<<"*";
    }
}
/*
output will look like -
	enter the number 6
    *     *
   **    **
  ***   ***
 ****  ****
***** *****
***********
	*/
