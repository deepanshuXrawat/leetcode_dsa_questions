class Solution {
public:
    bool isPowerOfFour(int n) {
        if (n == 1) {
            return true;
        }
        return (n > 0) && (n & (n - 2)) == 0 && (n%3 == 1);
    }
};