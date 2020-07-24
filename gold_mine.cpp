/*
  the miner can move right,right top,right bottom
  space complexcity:O(n2)
  time complexcity:O(n2)
*/
#include<bits/stdc++.h> 
using namespace std;
int MaxGold(int *gold,int m, int n)
{
	int goldpathcal[m][n]; 
	memset(goldpathcal, 0, sizeof(goldpathcal)); 
	for (int col=n-1; col>=0; col--) 
	{ 
		for (int row=0; row<m; row++) 
		{ 
			int right = (col==n-1)? 0: goldpathcal[row][col+1]; 
			int right_up = (row==0 || col==n-1)? 0: goldpathcal[row-1][col+1]; 
			int right_down = (row==m-1 || col==n-1)? 0: goldpathcal[row+1][col+1];
			goldpathcal[row][col] = *((gold+row*n)+col) + max(right, max(right_up, right_down)); 								
		}
	} 
	int mgold = goldpathcal[0][0]; 
	for (int i=1; i<m; i++) 
		mgold = max(mgold, goldpathcal[i][0]); 
	return mgold; 
} 
int main() 
{ 
	int i,j,m,n;
	cin>>m>>n;
	int gold[m][n];
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			cin>>gold[i][j];
		}
	} 
	cout << MaxGold((int*)gold,m,n); 
	return 0; 
} 
