// https://hackernoon.com/kadanes-algorithm-explained-50316f4fd8a6

// DP Approach
#include <bits/stdc++.h>
using namespace std;

int main(){
  vector<int> v={1,2,-1,4,5,-1}, dp(6,-1);
  dp[0]=v[0];
  for(int i=1;i<v.size();++i){
    dp[i]=max(dp[i-1],0)+v[i];
    // Each element in dp corresponds to the maximum subarray ending at that index.
  }
  // FINAL DP = {1,3,2,6,11,10}
  // Therefore, MaxSum=11
  return 0;
}
