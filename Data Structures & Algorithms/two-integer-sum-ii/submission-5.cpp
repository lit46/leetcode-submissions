class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int i1=0, i2=nums.size()-1;
        vector<int> output;
        while(target-nums[i2]!=nums[i1]){
            if(target-nums[i2]>nums[i1]){
                i1++;
            }else if(target-nums[i2]<nums[i1]){
                i2--;
            }
        }
        output.push_back(i1+1);
        output.push_back(i2+1);
        return output;
    }
};
