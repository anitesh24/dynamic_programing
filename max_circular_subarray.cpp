//max circular subarray using kadane algorithm by taking out min sub array and subtracting it from the total sum of the array 

#include<iostream>
using namespace std;
int circularkadane(int[],int);
int main()
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
		cin>>arr[i];
	cout<<circularkadane(arr,n);
	return 0;
}
int circularkadane(int arr[],int n)
{
	int total=arr[0];
	int maxc=arr[0],maxsf=arr[0],minc=arr[0],minsf=arr[0];
	for(int i=1;i<n;i++)
	{
		maxc=max(maxc+arr[i],arr[i]);
		maxsf=max(maxsf,maxc);
		minc=min(minc+arr[i],arr[i]);
		minsf=min(minsf,minc);
		total+=arr[i];
	}
	if(maxsf>0)
		return max(maxsf,total-minsf);
	else
		return maxsf;
}
