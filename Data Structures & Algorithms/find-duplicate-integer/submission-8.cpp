class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int i = 0;
        int n=nums.size();
        int curr=0;
        while(i!=curr||i==0){
            i = nums[i];
            curr = nums[nums[curr]];
        }
        i = 0;
        while(i!=curr){
            i=nums[i];
            curr=nums[curr];
        }
        return curr;
    }
};
