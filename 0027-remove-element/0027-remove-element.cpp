class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        vector<int> k;

        for (int i : nums) {
            if (i != val) {
                k.push_back(i);
            }
        }

        nums = k;
        return nums.size();
    }
};