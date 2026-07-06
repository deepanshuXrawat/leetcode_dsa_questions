class Solution {
public:
    int minElement(vector<int>& nums) {
        
        int n = nums.size();

        std::vector<int> ans(n);

        // sum of element in vector
        for(int i = 0; i < n; i++){
            int sum = 0;
            int val = nums[i];
            while(val > 0){
                int rev = val %10;
                sum = sum + rev;
                val = val/10;
            }

            ans[i] = sum;
        }

        // second loop to find minimum element after sum
        int mini = ans[0];
        for (int i = 1; i < n; i++) {
            if (ans[i] < mini) {
                mini = ans[i];
            }
        }

        return mini;


    }
};