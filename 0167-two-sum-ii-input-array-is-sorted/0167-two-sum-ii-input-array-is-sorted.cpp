class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {

        int start = 0;
        int end = numbers.size() -1;
        vector<int> result;

        while(start < end){
            if(numbers[start] + numbers[end] == target){
                result = {start+1, end+1};
                break;
            }

            else if(numbers[start] + numbers[end] < target){
                start++;
            }else if(numbers[start] + numbers[end] > target){
                end--;
            }
        }
        
        return result;
    }
};