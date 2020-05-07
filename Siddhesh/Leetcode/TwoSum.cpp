// First approach was brute force... two nested for loops -> O(n^2)

// Below is a better approach which uses map
// KEY -> NUMBER
// VALUE -> INDEX
// Used **unordered_map** because look-up i.e. find() takes constant time O(1) most of the times...
//  whereas find() in map requires O(logn) time.

/* 
**IMP**:
The function below should return vector but I have returned {values}... and it works!
Thus avoided using vector.
*/

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
