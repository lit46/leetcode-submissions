class Solution {
public:
    int binary(int l, int r, vector<int>& nums, int target){
        if(l>r) return -1;
        if(nums[l]>=target) return l;
        if(nums[r-1]<target) return r;
        int mid = l+(r-l)/2;
        if(nums[mid]<target&&nums[mid+1]>=target){
            return mid+1;
        }else if(nums[mid]<target){
            return binary(mid+1,r,nums,target);
        }else if(nums[mid]>=target&&nums[mid-1]<target){
            return mid;
        }else if(nums[mid]>target){
            return binary(l,mid-1,nums,target);
        }
        return 0;
    }
    int searchInsert(vector<int>& nums, int target) {
        return binary(0,nums.size(),nums,target);
    }
};