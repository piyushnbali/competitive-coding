class Solution {
public:
    int lengthOfLastWord(string s) {
        bool first_space=true;
        int count=0;
        for(int i=s.length()-1;i>=0;--i){
            if(s[i]==' '){
                if(first_space){
                    continue;
                }
                else{
                    break;
                }
            }
            else{
                first_space=false;
                ++count;
            }
        }
        return count;
    }
};
