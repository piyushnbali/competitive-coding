/*
Used Stack like approach:
For e.g. for "([])" :
  for first two input chars... stack will be :
  [
  (
  then ] comes next... [ will be popped from top.. stack now just has (
  then for )... ( will be popped.
  Thus for every valid case... final size of the stack will be zero!
 */

class Solution {
public:    
    bool isValid(string s) {
        int i,size=s.length();
        vector<char> stac;
        if(size==0) return true;
        if(size==1) return false;
        for (i=0;i<size;++i){
            if (s[i]=='(' || s[i]=='{' || s[i]=='['){
                stac.push_back(s[i]);
            }
            else if(!stac.empty() && ((s[i]==')' && stac[stac.size()-1]=='(') || (s[i]=='}' && stac[stac.size()-1]=='{') || (s[i]==']' && stac[stac.size()-1]=='['))){
                stac.pop_back();
            }
            else{
                return false;
            }
        }
        return stac.empty();
    }
};
