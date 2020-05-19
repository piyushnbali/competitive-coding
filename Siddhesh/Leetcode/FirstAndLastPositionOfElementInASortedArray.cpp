class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
       if (binary_search(nums.begin(),nums.end(),target)){
          auto low=lower_bound(nums.begin(),nums.end(),target);
          auto upp=upper_bound(nums.begin(),nums.end(),target);
          int l=low-nums.begin(),u=upp-nums.begin()-1;
          return {l,u};
       }
        return {-1,-1};
    }
};
