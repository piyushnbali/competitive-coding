//*******Using UNIQUE*********
    //Using erase- 20ms
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        nums.erase(unique(nums.begin(), nums.end()), nums.end());
        return nums.size();
    }
};
    //Using resize-12ms
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        nums.resize(distance(nums.begin(),unique(nums.begin(), nums.end())));
        return nums.size();
    }
};

//Faster than 99.7%
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.size()==0){
            return 0;
        }
        if (nums.size()==1){
            return 1;
        }
        int index=0,i,count=1;
        for (i=1;i<nums.size();++i){
            if (nums[index]!=nums[i]){
                nums[++index]=nums[i];
                ++count;
            }
        }
        return count;
    }
};

//My initial approach:
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int count=1;
        if (nums.size()==0){
            return 0;
        }
        auto first=nums.begin();
        for (auto ptr=nums.begin()+1;ptr!=nums.end();++ptr){
            if (*ptr==*first){
                nums.erase(ptr);
                --ptr;
            }
            else{
                first=ptr;
                ++count;
            }
        }
        return count;
    }
};
