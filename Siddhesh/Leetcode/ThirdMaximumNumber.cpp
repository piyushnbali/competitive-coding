// T-O(N) && S-O(1)
class Solution {
public:
    int thirdMax(vector<int>& nums) {
        long long int max1=LONG_MIN;
        long long int max2=LONG_MIN;
        long long int max3=LONG_MIN;
        int sz=nums.size();
        for(int i=0;i<sz;i++)
        {
            if(nums[i]>max1)
            {
                max3=max2;
                max2=max1;
                max1=nums[i];
            }
            else if(nums[i]>max2 && nums[i]!=max1)
            {
                max3=max2;
                max2=nums[i];
            }
            else if(nums[i]>max3 && nums[i]!=max1 && nums[i]!=max2)
            {
                max3=nums[i];
            }
        }
       
        return max3==LONG_MIN ? max1 : max3;
    }
};

// T-O(N) && S-O(N)
class Solution {
public:
    int thirdMax(vector<int>& nums) {
        set<int> s;
        for(int a:nums){
            s.insert(a);
        }
        auto ptr = s.rbegin();
        if(s.size()>=3){
            ++ptr;
            ++ptr;
            return *ptr;
        }
        return *ptr;
    }
};
