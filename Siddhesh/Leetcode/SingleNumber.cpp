/* MY INITIAL APPROACH:: Time O(n), Space O(n)
Used a haspmap... 
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        map<int,int> m;
        for(int a:nums){
            m[a]++;
        }
        for (auto b:m){
            if(b.second==1){
                return b.first;
                break;
            }
        }
        return 0;
    }
};
*/

/*Following is a better approach which uses xor operator: Time O(n), Space O(1) ... runs in 12ms
NOTE: 1. 0 ^ (xor) a number = that number itself
      2. number ^ same number = 0
      3. thus if a number comes two times then value of xor always becomes 0.
      4. if a number occurs only once then the final value after all xor operations is equal to that number!
*/

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int x=0;
        for (int a: nums){
            x=x^a;
        }
        return x;
    }
};
