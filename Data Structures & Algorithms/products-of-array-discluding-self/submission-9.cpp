class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> output(nums.size(), 1);
        vector<int> rightprod(nums.size(),1);
        for(int i=1;i<nums.size();i++){
            output[i]=output[i-1]*nums[i-1];
        }
        int right=1;
        for(int i=nums.size()-1;i>-1;i--){
            output[i]=right*output[i];
            right*=nums[i];
        }
        return output;
    }
};
