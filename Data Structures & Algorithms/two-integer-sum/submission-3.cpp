class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int flag=0;
        int n=nums.size();
        vector <int> arr;
        for(int i=1;i<n;i++){
            if(nums[flag]+nums[i]==target){
                arr = {flag,i};
            }else if((i==n-1)&&(nums[flag]+nums[i]!=target)){
                flag++;
                i=flag;
            }
        }
        return arr;
    }
};
