class Solution {
public:
    int maxSubArray(vector<int>& nums) {

        int n = nums.size(); //size
        
        int sum = 0; //starting sum = 0 to compare with final sum
        int maxsum = INT_MIN;  //max sum = -infinty, to compare and result 

        for(int i = 0; i < n; i++){
            // current sum
            sum = sum + nums[i];

            // when current sum less than max sum
            maxsum = max(sum, maxsum);

            // sum = 0 , when maxsum is less than 0
            if(sum < 0){
                sum = 0;
            }
        }
        return maxsum;
    }
};