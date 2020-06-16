/*
  PROBLEM: I/P={1,2,3} -> ADD ONE TO IT -> O/P={1,2,4}
    - DONE USING CARRY
  ONLY CASE WHEN WE HAVE TO CHANGE THE SIZE IS WHEN ALL THE ELEMENTS ARE 9!
    - IT BECOMES 1...xxxxxxx...0
*/

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int carry=1;
        for(int i=digits.size()-1;i>=0;--i){
            if(digits[i]+carry==10){
                digits[i]=0;
            }
            else{
                digits[i]+=carry;
                carry=0;
                break;
            }
        }
        if(carry){
            digits[0]=1;
            digits.push_back(0);
        }
        return digits;
    }
};
