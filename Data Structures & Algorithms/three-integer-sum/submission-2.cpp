class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        set<vector<int>> output;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
            int j=i+1;
            int k=nums.size()-1;
            while(j<k&&k<nums.size()){
                if(nums[j]+nums[k]==-nums[i]){
                    output.insert({nums[i],nums[j],nums[k]});
                    j++;
                }else if(nums[j]+nums[k]<-nums[i]){
                    j++;
                }else if(nums[j]+nums[k]>-nums[i]){
                    k--;
                }
            }
        }
        return vector<vector<int>>(output.begin(), output.end());
    }
};
