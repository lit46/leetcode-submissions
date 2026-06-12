class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>> output;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
            if(i>0&&nums[i]==nums[i-1]) continue;
            long long temp=target-nums[i];
            for(int j=i+1;j<nums.size();j++){
                if(j>i+1&&nums[j]==nums[j-1]) continue;
                int a=j+1;
                int b=nums.size()-1;
                long long temp2=temp-nums[j];
                while(a<b){
                    if(nums[a]+nums[b]==temp2){
                        output.push_back({nums[i], nums[j], nums[a],nums[b]});
                        a++;
                        b--;
                        while(a<b&&nums[a]==nums[a-1]) a++;
                    }else if(nums[a]+nums[b]<temp2){
                        a++;
                    }else if(nums[a]+nums[b]>temp2){
                        b--;
                    }
                }
            }
        }
        return output;
    }
};