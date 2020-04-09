/*
My earlier approach took long time to execute!

REMEMBER:: range of integer is : -2147483648 to 2147483647
i.e. INT_MAX=2147483647 and INT_MIN=-2147483648
*/
class Solution {
public:
    int reverse(int x) {
        int rev = 0;
        while (x != 0) {
            int pop = x % 10; //this is the remainder
            x /= 10;
            /*
            step below is used to check if the current value exceeds the INT_MAX when multiplied by 10
            the next condition (||) is when rev=214748364 i.e. when multiplied by 10 will become 2147483640...
            now the value won't exceed the INT_MAX if pop<=7 because INT_MAX has 7 at its units place.
            */
            if (rev > INT_MAX/10 || (rev == INT_MAX / 10 && pop > 7)) return 0;
            //similarly for negative integers...
            if (rev < INT_MIN/10 || (rev == INT_MIN / 10 && pop < -8)) return 0;
            rev = rev * 10 + pop;
        }
        return rev;
    }
};
