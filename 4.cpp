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
	
	int maxHang[row];
	for (int i = 0; i < row; i++)
		maxHang[i] = -1e6;
	
	int minCot[col];
	for (int i = 0; i < col; i++)
		minCot[i] = 1e6;
			
	for(int i = 0; i < row; i++) {
		for(int j = 0; j < col; j++)
		{
			if (a[i][j] > maxHang[i])
				maxHang[i] = a[i][j];

			if (a[i][j] < minCot[j])
				minCot[j] = a[i][j];
		}
		
	}
	
	for(int i = 0; i < row; i++) {
		for(int j = 0; j < col; j++) {
			if (maxHang[i] == minCot[j]) {
				cout << a[i][j] << endl;
				break;
			}
		}
	}
	
	return 0;
}
