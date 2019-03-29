#include<bits/stdc++.h>
using namespace std;

int main ()
{
	int row, col;
	
	cin >> row >> col;
	
	int a[row][col];
	
	for(int i = 0; i < row; i++)
		for (int j = 0; j < col; j++)
			cin >> a[i][j];
			
	for(int i = 0; i < row; i++)
		for(int j = 1; j < col; j++)
			if (a[i][j] < a[i][j - 1])
			{
				cout << 0;
				return 0;
			}
			
	for(int i = 0; i < col; i++)
		for(int j = 1; j < row; j++)
			if (a[j][i] < a[j][i - 1])
			{
				cout << 0;
				return 0;
			}
	
	cout << 1;
	
	return 0;
}
