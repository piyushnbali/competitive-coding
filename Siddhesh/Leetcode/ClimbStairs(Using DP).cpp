// Nothing but just Fibonacci sequence.
// Using DP is the key here.. else time limit exceeds.

class Solution {
public:
    int climbStairs(int n) {
        if(n==0 || n==1) return 1;
        vector<int> v(n+1);
        v[0]=1;
        v[1]=1;
        for(int i=2;i<=n;++i){
            v[i]=v[i-1]+v[i-2];
        } 
        return v[n];
    }
};
