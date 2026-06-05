class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        int i=0,j=1;
        while(j-i<=k&&j<=nums.size()-1){
            if(nums[i]==nums[j]){
                return true;
            }
            j++;
            if(j-i>k){
                i++;
                j=i+1;
            }
        }
        return false;
    }
};