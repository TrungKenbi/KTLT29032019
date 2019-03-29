#include<bits/stdc++.h>
using namespace std;

bool isNguyenTo (int x)
{
	if (x < 2)
		return false;
	for (int i = 2; i <= sqrt(x); i++)
		if (x % i == 0)
			return false;
	return true;
}

int main ()
{
	int row, col;
	
	cin >> row >> col;
	int a[row][col];
	
	for(int i = 0; i < row; i++)
		for (int j = 0; j < col; j++)
			cin >> a[i][j];
	
	int numNguyenTo = 0;
			
	for(int i = 0; i < row; i++)
		for(int j = 0; j < col; j++)
			if (isNguyenTo(a[i][j]))
				numNguyenTo++;
	
	cout << numNguyenTo;
	
	return 0;
}
