/*coin change problem max number of ways using 1,2,3
  complexcity:O(mn)
*/
#include<iostream>
using namespace std;
void max_coin(int arr[],int m,int n)
{
	int i,j,x,y;
	int a[n+1][m];
	for (i=0; i<m; i++) 
        a[0][i]=1; 
    for(i=1;i<n+1;i++)
    {
    	for(j=0;j<m;j++)
    	{
    		x=(i-arr[j]>=0)?a[i-arr[j]][j]:0;
    		y=(j>=1)?a[i][j-1]:0;
    		a[i][j]=x+y;
		}
	}
	cout<<a[n][m-1];
}
int main()
{
	int arr[]={1,2,3};
	int m=sizeof(arr)/sizeof(arr[0]);
	int n;
	cin>>n;
	max_coin(arr,m,n);
}
