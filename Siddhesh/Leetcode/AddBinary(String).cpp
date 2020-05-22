/*
  MY INTITAL SOLUTION HAD LOTS OF IF-ESLE STATEMENTS
  BUT THE CODE BELOW IS CONCISE!!
  PROBLEM WITH THE INITIAL APPROACH WAS FOLLOWS:
    1. Determining how to loop? Because one string may be smaller than other.
      -> Solved by using a simple if condition inside the loop which checks if the index is valid.
      -> Initialized sum=carry, then added only if the indices are valid.
      -> Addition is done by simply subtracting '0' from the respective character which gives int sum.
      -> sum/2 gives carry and sum%2 gives current index addition.
*/

class Solution {
public:
    string addBinary(string a, string b) {
        string ans="";
        int carry=0,sum,size_a=a.length()-1,size_b=b.length()-1;
        while(size_a>=0 || size_b>=0){
            sum=carry;
            if(size_a>=0){
                sum+=a[size_a]-'0';
                --size_a;
            }
            if(size_b>=0){
                sum+=b[size_b]-'0';
                --size_b;
            }
            ans=to_string(sum%2)+ans;
            carry=sum/2;
        }
        //if carry still exists after all addition is done
        if(carry==1){
            ans='1'+ans;
        }
        return ans;
    }
};
