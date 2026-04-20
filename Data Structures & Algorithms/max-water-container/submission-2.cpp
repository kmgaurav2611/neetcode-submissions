class Solution {
public:
    int maxArea(vector<int>& heights) {
        int l = 0, r = heights.size()-1;
        int area = INT_MIN;

        while(l<r){
            area = max(area, (r-l)*min(heights[r],heights[l]));
            if(heights[l]<=heights[r])
            l++;
            else 
            r--;
        }
        return area;
    }
};
