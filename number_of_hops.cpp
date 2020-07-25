  /*number of hops
  complexcity:O(n)*/
#include<iostream>
using namespace std;
int findhop(int n)
{
	int hop[n];
	hop[0]=1,hop[1]=1,hop[2]=2;
	for(int i=3;i<=n;i++)
	{
		hop[i]=hop[i-1]+hop[i-2]+hop[i-3];
	}
	return hop[n];
}
int main()
{
	int n;
	cin>>n;
	cout<<findhop(n);
}
