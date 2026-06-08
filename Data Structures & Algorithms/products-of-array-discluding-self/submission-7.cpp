class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> leftprod;
        vector<int> rightprod;
        leftprod.push_back(1);
        int i=0;
        while(i<nums.size()){
            rightprod.push_back(1);
            i++;
        }
        for(int i=1;i<nums.size();i++){
            leftprod.push_back(leftprod[i-1]*nums[i-1]);
        }
        for(int i=nums.size()-2;i>-1;i--){
            rightprod[i] = rightprod[i+1]*nums[i+1];
        }
        vector<int> output;
        for(int i=0;i<nums.size();i++){
            output.push_back(leftprod[i]*rightprod[i]);
        }
        return output;
    }
};
