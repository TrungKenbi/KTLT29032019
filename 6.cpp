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
	
	int n, x = -1, y = -1;
	cin >> n;
			
	for(int i = 0; i < row; i++)
		for(int j = 0; j < col; j++)
			if (a[i][j] == n)
			{
				x = i;
				y = j;	
			}
	
	if (x != -1 && y != -1)
		cout << x << " " << y;		
	
	
	return 0;
}
