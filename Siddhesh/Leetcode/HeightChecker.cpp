class Solution {
public:
    int heightChecker(vector<int>& h) {
        int count=0;
        vector<int> v=h;
        sort(h.begin(),h.end());
        if(h==v) return 0;
        for(int i=0;i<h.size();++i){
            if(h[i]!=v[i]){
                ++count;
            }
        }
        return count;
    }
};
