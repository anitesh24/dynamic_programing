/*minimum number of coin to reach a sum
  complexcity:O(ms)
*/
#include<iostream> 
using namespace std;  
int mincoins(int coins[], int m, int s) 
{ 
    int table[s+1]; 
    table[0] = 0; 
    for (int i=1; i<=s; i++) 
        table[i] = INT_MAX; 
    for (int i=1; i<=s; i++) 
    { 
        for (int j=0; j<m; j++) 
          if (coins[j] <= i) 
          { 
              int min = table[i-coins[j]]; 
              if (min != INT_MAX && min + 1 < table[i]) 
                  table[i] = min + 1; 
          } 
    } 
    return table[s]; 
} 
int main() 
{ 
    int coins[] =  {9, 6, 5, 1}; 
    int m = sizeof(coins)/sizeof(coins[0]); 
    int s = 11; 
    cout << mincoins(coins, m, s); 
    return 0; 
} 
