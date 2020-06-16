class Solution {
public:
    bool validMountainArray(vector<int>& A) {
        if(A.size()==0 || A.size()==1) return 0;
        int i=0;

        //increasing
        while (i<=A.size()-2 && A[i]<A[i+1]){
            ++i;
        }
 
        // Check if i is at start or end
        if(i==0 || i==A.size()-1){
            return 0;
        }

        // Decreasing
        while(i<=A.size()-2 && A[i]>A[i+1]){
            ++i;
        }

        // If i is at the end... return true
        if(i==A.size()-1) return 1;
        return 0;
    }
};
