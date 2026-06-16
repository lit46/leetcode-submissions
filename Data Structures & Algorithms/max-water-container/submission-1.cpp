class Solution {
public:
    int maxArea(vector<int>& heights) {
        int maxArea=0,currarea;
        for(int i=0;i<heights.size();i++){
            for(int j=i+1;j<heights.size();j++){
                currarea=(j-i)*min(heights[i],heights[j]);
                maxArea = max(currarea, maxArea);        
            }
        }
        return maxArea;
    }
};
