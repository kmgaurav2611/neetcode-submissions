class Solution {
public:
    void sortColors(vector<int>& nums) {
        int countZero =0, countOne =0, countTwo =0;

        for(int i =0; i< nums.size(); i++) {
            if(nums[i] ==0)
            countZero++;
            else if(nums[i] == 1)
            countOne++;
            else 
            countTwo++;
        }

        for(int i =0; i< nums.size(); i++){
            if(countZero!=0){
                nums[i]=0;
                countZero--;
            }
            else if(countOne !=0)
            {
                nums[i] = 1;
                countOne--;
            }
            else{
                nums[i] = 2;
                countTwo--;
            }
        }
    }
};