//Link :

class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> v;
        size_t vi;
        for(int i=0;i<nums.size();++i){
            vi=abs(nums[i])-1;
            if(nums[vi]>0){
            nums[vi]=-nums[vi];}
        }
        for(int i=0;i<nums.size();++i){
            if(nums[i]>0){
                v.push_back(i+1);
            }
        }
        return v;
    }
};
