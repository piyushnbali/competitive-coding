/* converting int to string using to_string and looping through it takes 6.1 ms to run but if I reverse int using a while loop, it runs in 0ms! */

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
