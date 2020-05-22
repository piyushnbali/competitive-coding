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
        if(carry==1){
            ans='1'+ans;
        }
        return ans;
    }
};
