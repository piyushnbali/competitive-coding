// TRICK : TRAVERSE TWO LISTS BACKWARDS
// Below is the Ideal Approach
/*
                 m+n-1
                  |
    v1={1,2,3,0,0,0}, v2={2,5,6}
            |                 |
            m-1              n-1
            
     WHICHEVER IS BIGGER AMONG v1[m-1] and v2[n-1]  WILL BE ADDED TO THE m+n-1 th INDEX;
*/
class Solution {
public:
    void merge(vector<int>& v1, int m, vector<int>& v2, int n) {
        // To avoid use of any negative indices
        while(n>0 && m>0){
            if(v1[m-1]>v2[n-1]) {
                v1[m+n-1]=v1[m-1];
                --m;
            }
            else{
                v1[m+n-1]=v2[n-1];
                --n;
            }
        }
        // For remaining +ve indices
        if(n!=0){
            while(n!=0){
                v1[m+n-1]=v2[n-1];
                --n;
            }
        }
        else if(m!=0){
            while(m!=0){
                v1[m+n-1]=v1[m-1];
                --m;
            }
        }
    }
};
