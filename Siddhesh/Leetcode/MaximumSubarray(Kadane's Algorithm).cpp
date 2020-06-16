/*
  THIS CODE HANDLES NEGATIVE VALUES BY:
    1. SETTING INITIAL sum AND best VALUES AS FIRST ELEMENT OF NUMS.
    2. LOOPING FROM 2ND ELEMENT INSTEAD OF FIRST.
*/
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum=nums[0],best=nums[0];
        for(int i=1;i<nums.size();++i){
            sum=max(nums[i],sum+nums[i]);
            best=max(best,sum);
        }
        return best;
    }
};

//OLD APPROACH
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        bool all_neg=true;
        int sum=0,best=0,neg_max=INT_MIN;
        for(int i=0;i<nums.size();++i){
            if(nums[i]<0 && all_neg){
                if(neg_max<nums[i]){
                    neg_max=nums[i];
                }
            }
            else{
                all_neg=false;
            }
            sum=max(nums[i],sum+nums[i]);
            best=max(best,sum);
        }
        if(all_neg) return neg_max;
        return best;
    }
};
