class Solution {
public:
    int maxArea(vector<int>& heights) {
        int maxArea=0,currarea;
        int l=0,r=heights.size()-1;
        while(l<r){
            currarea=(r-l)*min(heights[r],heights[l]);
            maxArea = max(currarea, maxArea);  
            if(heights[r]>heights[l]){
                l++;
            }else{
                r--;
            }
        }
        return maxArea;
    }
};
