class Solution {
public:
    bool bsearch(vector<int>& arr, int left, int right, int target){
        if(left> right)
        return false;

        int mid = (left + right)/2;
        // cout<<"mid"<<mid<<endl;
        if(arr[mid] == target)
        return true;

        return bsearch(arr, left, mid -1, target) || bsearch(arr, mid+1, right, target);
    }
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int height = matrix.size();
        int width = matrix[0].size();
        for(int i = 0 ; i< height; i++){
            if(target > matrix[i][width-1] )
            continue;

            cout<<matrix[i][0];
            if(bsearch(matrix[i], 0, width-1, target)){
                return true;
            }
        }
        return false;
    }
};
