class Solution {
public:
    int countDigitOccurrences(vector<int>& nums, int digit) {
        
        int sum = 0;

        for(int i : nums){
            while(i > 0){
                int n = i % 10;
                if(n == digit){
                    sum++;
                }
                i = i / 10;
            }
        }
        return sum;
    }
};