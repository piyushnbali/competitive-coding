// Changing array such that even nos. come first and then there are odd nos.

class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& A) {
        int tmp;
        int i=0,j=A.size()-1;
        bool i_even,j_even;
        while (i<j){
            A[i]%2==0 ? i_even=1 : i_even=0;
            A[j]%2==0 ? j_even=1 : j_even=0;
            if(!i_even && j_even){
                tmp=A[i];
                A[i]=A[j];
                A[j]=tmp;
                j_even=0;
                i_even=1;
            }
            if(i_even) ++i;
            if(!j_even) --j;
        }
        return A;  
    }
};
