class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count = 0;
        int ans = 0;

        // check max if nums[i] == 1, rather than checking two times 

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 1) {
                count++;
                ans = max(ans, count);
            } else {
                count = 0;
            }
        }

        // ans = max(count, ans);

        return ans;
    }
};