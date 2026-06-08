class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> leftprod;
        vector<int> rightprod;
        leftprod.push_back(1);
        rightprod.push_back(1);
        for(int i=1;i<nums.size();i++){
            leftprod.push_back(leftprod[i-1]*nums[i-1]);
        }
        for(int i=nums.size()-2;i>-1;i--){
            rightprod.insert(rightprod.begin(), rightprod[0]*nums[i+1]);
        }
        vector<int> output;
        for(int i=0;i<nums.size();i++){
            output.push_back(leftprod[i]*rightprod[i]);
        }
        return output;
    }
};
