class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int right = numbers.size()-1;
        int left = 0;
        // for(int left = 0; left < numbers.size(); left++){
        //     if(numbers[left] + numbers[right] > target)
        //     right--;
        //     else if(numbers[left] + numbers[right] == target)
        //     return {left, right};
        // }
        while(left <= right) {
            if(numbers[left] + numbers[right] > target){
                right--;
            }
            else if(numbers[left] + numbers[right] < target){
                left++;
            }
            else
            return {left+1, right+1};
        }
        return {};
    }
};
