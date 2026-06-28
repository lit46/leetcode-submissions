class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int l=0, r=0, minlen=0, sum=nums[0];
        while(r<nums.size()&&l<=r){
            while(sum<target){
                r++;
                if(r>=nums.size()){
                    return minlen;
                }
                sum+=nums[r];
            }
            if(minlen==0) minlen=r-l+1;
            minlen=min(minlen,r-l+1);
            sum-=nums[l];
            l++;
        }
        return minlen;
    }
};