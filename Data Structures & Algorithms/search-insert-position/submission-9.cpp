class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int l=0, r=nums.size();
        if(nums[0]>=target) return 0;
        if(nums[r-1]<target) return r;
        while(l<=r){
            int mid=l+(r-l)/2;
            if(nums[mid]<target&&nums[mid+1]>=target){
                return mid+1;
            }else if(nums[mid]<target){
                l=mid+1;
            }else if(nums[mid]>=target&&nums[mid-1]<target){
                return mid;                
            }else if(nums[mid]>target){
                r=mid-1;
            }
        }
    }
};