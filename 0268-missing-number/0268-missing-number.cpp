class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int sum = 0;

        for (int i = 0; i < n + 1; i++) {
            sum = sum + i;
        }

        for (int i : nums) {
            sum = sum - i;
        }

        return sum;
    }
};