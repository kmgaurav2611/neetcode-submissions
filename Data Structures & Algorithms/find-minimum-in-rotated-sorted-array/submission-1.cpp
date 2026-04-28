class Solution {
public:
    int getPivot(vector<int> &nums) {
        int start =0; 
        int end = nums.size()-1;
        while(start<end) {
            int mid = start + (end - start)/2;
            if(nums[mid] > nums[end]){
                start = mid+1;
            }
            else
            end = mid;
        }
        return start;
    }
    int findMin(vector<int> &nums) {
       int left =0;
       int right = nums.size()-1;

       while(left < right) {
        int mid= left + (right - left)/2;

        // check if the middle element is greater than the right element
        if(nums[mid] > nums[right]){
            left = mid +1;
        }
        else {
            right = mid;
        }
       }
       return nums[left];
    // return nums[getPivot(nums)];
    }
};
