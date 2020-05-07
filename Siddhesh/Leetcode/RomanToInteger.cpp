class Solution {
public:
    int romanToInt(string s) {
        int i,size=s.size(),sum=0;
        map<char,int> m = {
                            {'I',1},
                           {'V',5},
                           {'X',10},
                           {'L',50},
                           {'C',100},
                           {'D',500},
                           {'M',1000},
                            {' ',0}};
        for (i=0;i<size;++i){
            /*
            if (i==size){
                sum+=m[s[i]];            
            }*/
            //else{
            if (m[s[i]]<m[s[i+1]]){
                sum+=m[s[i+1]]-m[s[i]];
                ++i;
            }
            else{
                sum+=m[s[i]];
            }
        }
        return sum;
    }
};
