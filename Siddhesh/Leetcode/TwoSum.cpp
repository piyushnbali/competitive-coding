// First approach was brute force... two nested for loops -> O(n^2)

// Below is a better approach which uses map
// KEY -> NUMBER   |  because find() works only for key NOT value!
// VALUE -> INDEX  |
// Used **unordered_map** because look-up i.e. find() takes constant time O(1) most of the times...
//  Whereas find() in map requires O(logn) time.





class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> m;
        unordered_map<int,int>::iterator ptr;
        int i,size=nums.size(),diff;
        for (i=0;i<size;++i){
            diff = target-nums[i];
            ptr = m.find(diff);
            if (ptr!=m.end()){
                return {ptr->second,i};
            }
            m.insert({nums[i],i});
        }
        return {};
    }
};
