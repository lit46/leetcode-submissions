class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int count = 0;
        int curSum=0;
        unordered_map<int, int> prefixsum;
        prefixsum[0] =1;
        for(int i: nums){
            curSum+=i;
            int diff=curSum-k;
            count += prefixsum[diff];
            prefixsum[curSum]++;
        }

        return count;
    }
};