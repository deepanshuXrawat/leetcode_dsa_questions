class Solution {
public:
    long long sumAndMultiply(int n) {
        long num = 0;
        long sum = 0;
        long ten = 1;

        while (n > 0) {
            int rev = n % 10;

            if (rev != 0) {
                num = rev * ten + num;
                ten = ten * 10;
            } else {
                ten = ten;
            }

            sum = sum + rev;

            n = n / 10;
        }

        long long ans = num * sum;

        return ans;
    }
};