class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string s="";
        if (strs.size()==0) return s;
        char c;
        int i,j;
        for (i=0;i<strs[0].size();++i){
            c=strs[0][i];
            for (j=1;j<strs.size();++j){
                if (i==strs[j].length() || c!=strs[j][i]){
                    return s;
                }
            }
            s.append(1,c);
        }
        return s;
    }
};
