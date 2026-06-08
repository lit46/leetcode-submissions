class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int product=1;
        int zeroflag=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                zeroflag++;
            }else{
                product*=nums[i];
            }
        }
        vector<int> output;
        for(int i=0;i<nums.size();i++){
            if(zeroflag>1){
                output.push_back(0);
            }else if(zeroflag==1){
                if(nums[i]==0) output.push_back(product);
                else output.push_back(0);
            }else{
                output.push_back(product/nums[i]);
            }
        }
        return output;
    }
};
