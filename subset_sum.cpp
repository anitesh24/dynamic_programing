//sum of subset
#include<iostream>
using namespace std;
bool subsum(int a[],int n,int sum)
{
	bool dp[n+1][sum+1];
	for(int i=0;i<=sum;i++)
	{
		dp[0][i]=false;
	}
	for(int i=0;i<=n;i++)
	{
		dp[i][0]=true;
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=sum;j++)
		{
			if(a[i-1<=j])
			{
				dp[i][j]=dp[i-1][j]||dp[i-1][j-a[i-1]];
			}
			else 
				dp[i][j]=dp[i-1][j];
		}
	}
	return dp[n][sum];
}
int main()
{
	int n,sum;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
		cin>>a[i];
	cin>>sum;
	cout<<subsum(a,n,sum);
}
