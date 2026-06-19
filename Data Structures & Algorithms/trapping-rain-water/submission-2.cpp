class Solution {
public:
    int trap(vector<int>& height) {
        int squares = 0;
        int left=1, right=height.size()-2;
        int lmax=height[0], rmax=height[height.size()-1];
        while(left<=right){
            if(lmax<=rmax){
                if(height[left]>=lmax){
                    lmax=height[left];
                }else{
                    squares+=lmax-height[left];
                }    
                left++;
            }else{
                if(height[right]>=rmax){
                    rmax=height[right];
                }else{
                    squares+=rmax-height[right];
                }
                right--;
            }
        }
        return squares;
    }
};
