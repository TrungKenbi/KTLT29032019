#include<bits/stdc++.h>
using namespace std;

int main ()
{
	int row, col;
	
	cin >> row >> col;
	
	if (row != col)
	{
		cout << 0;
		return 0;
	}
	
	int a[row][col];

	
	for(int i = 0; i < row; i++)
		for (int j = 0; j < col; j++)
			cin >> a[i][j];
			
	for(int i = 1; i < row; i++)
		for(int j = 0; j < i; j++)
			if (a[i][j] != a[j][i])
			{
				cout << 0;
				return 0;
			}
			
	cout << 1;
	
	
	return 0;
}
