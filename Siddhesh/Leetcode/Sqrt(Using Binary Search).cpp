class Solution {
public:
    int mySqrt(int x) {
        long long start=1,end=x,mid=0;
        while(start<=end){
            mid=(start+end)/2;
            if(mid*mid==x || ((mid+1)*(mid+1)>x && mid*mid<x)){
                return (int)mid;
            }
            else{
                if(mid*mid>x){
                    end=mid-1;
                }
                else{
                    start=mid+1;
                }
            }
        }
        return mid;
    }
};
