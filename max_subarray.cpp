//max sub array using kadane algorithm 

#include<iostream>
#include<math.h>
int msa_kadane(int [],int );
using namespace std;
int main()
{
	int n,i;
	cin>>n;
	int arr[n];
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout<<msa_kadane(arr,n);
	return 0;
}
int msa_kadane(int arr[],int n)
{
	int maxc=arr[0],maxsf=arr[0];  //maxc=current maximum; maxsf=maximum so far
	for(int i=1;i<n;i++)
	{
		maxc=max(maxc+arr[i],arr[i]);
		maxsf=max(maxsf,maxc);
	}
	return maxsf;
}
