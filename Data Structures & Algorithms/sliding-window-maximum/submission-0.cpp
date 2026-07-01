class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        int l=0, r=k-1;
        vector<int> maxarr;
        while(r<nums.size()){
            int max=nums[l];
            for(int i=l+1;i<=r;i++){
                if(nums[i]>max) max=nums[i];
            }
            maxarr.push_back(max);
            l++;
            r++;
        }
        return maxarr;
    }
};
