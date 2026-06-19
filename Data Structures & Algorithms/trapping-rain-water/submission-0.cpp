class Solution {
public:
    int trap(vector<int>& height) {
        int squares = 0;
        for(int i=0;i<height.size();i++){
            int leftmax = height[0], rightmax = height[height.size()-1];
            for(int j=0;j<=i;j++){
                if(leftmax<height[j])
                    leftmax = height[j];
            }
            for(int j=height.size()-1;j>=i;j--){
                if(height[j]>rightmax)
                    rightmax = height[j];
            }
            squares+=min(leftmax, rightmax) - height[i];
        }
        return squares;
    }
};
