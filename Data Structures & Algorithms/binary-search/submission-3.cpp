class Solution {
public:

    int binary(int l, int r, vector<int>& nums, int target){
        if(l>r) return -1;
        int mid = l+(r-l)/2;
        if(nums[mid]<target) return binary(mid+1,r,nums,target);
        else if(nums[mid]>target) return binary(l,mid-1,nums,target);
        else if(nums[mid]==target) return mid;
        return 0;
    }

    int search(vector<int>& nums, int target) {
        return binary(0,nums.size(),nums,target);
    }
};
