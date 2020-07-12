// n=1, "1"   default case
// n=2, "11"  above string is read as one 1s
// n=3, "21"  -||- two 1s
// ... Used recursion as below


class Solution {
public:
    string countAndSay(int n) {
        if(n==1){
            return "1";
        }
        int count=0;
        string s=countAndSay(n-1),ans="";
        for(int i=0;i<s.length();++i){
            if(i==0){
                ++count;
            }
            else if(s[i]==s[i-1]){
                ++count;
            }
            else{
                ans+=to_string(count)+s[i-1];
                count=1;
            }
            if(i==s.length()-1){
                ans+=to_string(count)+s[i];
            }
        }
        return ans;
    }
};
