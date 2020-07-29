//coin change maximum number of ways using unbounded knapsack
#include<iostream>
using namespace std;
int coinchange(int coins[],int sum,int size)
{
	int dp[size+1][sum+1];
    for(int i=0;i<=sum;i++){
        dp[0][i]=0;
    }
    for(int i=0;i<=size;i++){
        dp[i][0]=1;
    }
    for(int i=1;i<=size;i++){
        for(int j=1;j<=sum;j++){
            if(coins[i-1]<=j){
                dp[i][j] = dp[i-1][j] + dp[i][j-coins[i-1]];
            }
            else{
                dp[i][j] = dp[i-1][j];
            }
        }
    }
    for(int i=0;i<=size;i++){
        for(int j=0;j<=sum;j++){
            cout<<dp[i][j]<<" ";
        }
        cout<<"\n";
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
	cout<<coinchange(coin,sum,n);
	return 0;
}
