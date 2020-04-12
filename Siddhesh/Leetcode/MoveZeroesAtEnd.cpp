class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int index=0,size=nums.size();
        for (int a:nums){
            if (a!=0){
                nums[index]=a;
                ++index;
            }
        }
        while(index<size){
            nums[index]=0;
            ++index;
        }
    }
};
