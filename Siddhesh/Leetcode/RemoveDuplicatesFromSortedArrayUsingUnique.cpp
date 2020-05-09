//*******Using UNIQUE*********
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        nums.erase(unique(nums.begin(), nums.end()), nums.end());
        return nums.size();
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
