/*
Question: To check if a string (needle) is a part of another string (haystack).
*/

//4ms
class Solution {
public:
    int strStr(string haystack, string needle) {
        int r=haystack.find(needle);
        return r;   
    }
};

//8ms
class Solution {
public:
    int strStr(string haystack, string needle) {
        int size_h=haystack.size(),size_n=needle.size();
        if(size_n==0){
            return 0;
        }
        if(size_n>size_h){
            return -1;
        }
        for(int i=0;i<=size_h-size_n;++i){
           if(haystack.substr(i,size_n)==needle){
               return i;
           }
        }
        return -1;  
    }
};
