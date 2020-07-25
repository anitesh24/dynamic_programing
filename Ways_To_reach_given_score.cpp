/*ways to reach a score by calculating smaller score
  time complexcity:O(n)
*/
#include<iostream>
using namespace std;
void ways(int sum){
    int score[sum+1]={0};
    score[0]=1;
    for(int i=3;i<=sum;i++) 
      score[i]+=score[i-3];
    for(int i=5;i<=sum;i++) 
      score[i]+=score[i-5];
    for(int i=10;i<=sum;i++) 
      score[i]+=score[i-10];
    cout<<score[sum];
}
int main()
 {
    int sum;
	  cin>>sum;
	  ways(sum);
	return 0;
}
