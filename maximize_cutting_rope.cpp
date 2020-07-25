//maximize the cutting
//time complexcity:O(n)
#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	int n,x,y,z;
	cin>>n>>x>>y>>z;
	int dp[n+1];
	memset(dp, -1, sizeof(dp));
	dp[0]=0;
	for(int i=0;i<=n;i++)
	{
		if(dp[i]!=-1)
		{
			if(i+x<=n)
			{
				dp[i+x]=max(dp[i+x],dp[i]+1);
			}
			if(i+y<=n)
			{
				dp[i+y]=max(dp[i+y],dp[i]+1);
			}
			if(i+z<=n)
			{
				dp[i+z]=max(dp[i+z],dp[i]+1);
			}
		}
	}
	cout<<dp[n];
}
