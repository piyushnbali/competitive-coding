// Nothing but just Fibonacci sequence.
// Using DP is the key here.. else time limit exceeds.

//ITERATION
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

//RECURSION
class Solution {
public:
    static int ans(vector<int>& v, int n){
        if(n==0) return 1;
        if(n==1) return 1;
        if(v[n]!=-1){
            return v[n];
        }
        v[n]=ans(v,n-1)+ans(v,n-2);
        return v[n];
    }
    int climbStairs(int n) {
        vector<int> v(n+1,-1);
        if(n>1){
            v[0]=1;
            v[1]=1;
        }
        return ans(v,n);
    }
};
