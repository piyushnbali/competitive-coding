/*
*******
PREVIOUS APPROACH USING MAP... IT TOOK AROUND 24-36 ms TO EXECUTE
*******
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
*/

//SO I TRIED TO USE INLINE FUNCTION AND IT DID THE MAGIC! Function call overhead didn't occur.
//CODE EXECUTED IN 0-12 ms!!!!!!

class Solution {
public:
    inline int value(char x){
        if (x == 'I') return 1;
        if (x == 'V') return 5;
        if (x == 'X') return 10;
        if (x == 'L') return 50;
        if (x == 'C') return 100;
        if (x == 'D') return 500;
        if (x == 'M') return 1000;
        return 0;
    }
    
    int romanToInt(string s) {
        int i,size=s.size(),sum=0;
        for (i=0;i<size;++i){
            if (value(s[i])<value(s[i+1])){
                sum+=value(s[i+1])-value(s[i]);
                ++i;
            }
            else{
                sum+=value(s[i]);
            }
        }
        return sum;
    }
};
