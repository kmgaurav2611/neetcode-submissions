class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int product = 1;
        int productWithoutZero = 1;
        for(int i = 0; i< nums.size(); i++){
            if(nums[i] !=0)
            productWithoutZero = productWithoutZero * nums[i];
            product = product * nums[i];
        }
        

        vector<int> result;
        for(int i =0; i< nums.size(); i++) {
            if(nums[i]==0){
                result.push_back(productWithoutZero);
            }
            else
            result.push_back(product/nums[i]);
        }
        return result;
    }
};
