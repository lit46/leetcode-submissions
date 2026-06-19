class Solution {
public:
    int trap(vector<int>& height) {
        int squares = 0;
        vector<int> leftmax(height.size(),0);
        int left = height[0];
        for(int i=0;i<height.size();i++){
            if(height[i]>left){
                left = height[i];
            }
            leftmax[i] = left;
        }
        int right = height[height.size()-1];
        vector<int> rightmax(height.size(),0);
        for(int i=height.size()-1;i>-1;i--){
            if(right<height[i]){
                right = height[i];
            }
            rightmax[i]=right;
        }
        for(int i=0;i<height.size();i++){
            squares+=min(leftmax[i], rightmax[i]) - height[i];
        }
        return squares;
    }
};
