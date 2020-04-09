class Solution {
public:
    bool isPalindrome(int x) {
        if (x<0) return false;
        if(x==0) return true;
        long long ans=0;
        int copy=x;
        while(x){
            ans=ans*10+(x%10);
            x/=10;
        }
        if((ans-copy)==0) return true;
        else return false;
    }
};
