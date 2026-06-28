class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int l=0, r=0, minlen=0, sum=0;
        while(r<nums.size()&&l<=r){
            sum+=nums[r];
            while(sum>=target){
                if(minlen==0) minlen=r-l+1;
                minlen=min(minlen,r-l+1);
                sum-=nums[l];
                l++;
            }
            r++;            
        }
        return minlen;
    }
};