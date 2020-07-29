//minimum number of coins required to make a given sum unbounded knapsack
#include<iostream>
using namespace std;
int mincoins(int coins[],int sum,int size)
{
	int dp[size+1][sum+1];
	for(int i=0;i<=sum;i++){
        dp[0][i] = INT_MAX - 1;
    }
	for(int i=1;i<=size;i++){
        dp[i][0] = 0;
    }
    for(int i=1;i<=size;i++){
        for(int j=1;j<=sum;j++){
            if(coins[i-1]<=j){
                dp[i][j] = min(dp[i-1][j],1+dp[i][j-coins[i-1]]);
            }
            else{
                dp[i][j] = dp[i-1][j];
            }
        }
    }
    return dp[size][sum];
}
int main()
{
	int n,sum;
	cin>>n;
	int coin[n];
	for(int i=0;i<n;i++)
		cin>>coin[i];
	cin>>sum;
	cout<<mincoins(coin,sum,n);
	return 0;
}
