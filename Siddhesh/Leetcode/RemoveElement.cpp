//1. Maintaining order
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int index=0;
        // Using the following loop reduced time of execution
        // Instead of for loop
        for (int a:nums){
          if (a!=val){
              nums[index]=a;
              ++index;
          }
        }
        return index;
    }
};

//2. Without maintaining order

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int index=0,size=nums.size(),i=0;
        while(i<size){
          if (nums[i]==val){
              nums[i]=nums[size-1];
              --size;
              ++index;
          }
            else{
                ++i;
            }
        }
        return size;
    }
};
