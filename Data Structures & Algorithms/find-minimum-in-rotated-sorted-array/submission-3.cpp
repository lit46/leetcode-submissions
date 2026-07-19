class Solution {
public:
    int findMin(vector<int> &nums) {
        int n = nums.size();
        int l=0,r=n-1;
        if(nums[l]<=nums[r]) return nums[l];
        while(l<r){
            int mid=l+(r-l)/2;
            if(nums[mid]<nums[mid+1]&&nums[mid]>=nums[l])
                l=mid+1;
            else if(nums[mid]<nums[mid+1]&&nums[mid]<nums[l]){
                r=mid-1;
            }else if(nums[mid]>nums[mid+1]){
                return nums[mid+1];
            }
        }
        return nums[l+1];
    }
};
