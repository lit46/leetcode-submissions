class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size();
        int f = n/3;
        vector<int> output;
        for(int i: nums){
            int m1=i;
            erase(nums, m1);
            if(nums.size()<n-f){
                output.push_back(m1);
                while(nums.size()!=n){
                    nums.push_back(m1);
                }
                break;
            }
            while(nums.size()!=n){
                nums.push_back(m1);
            }
        }
        for(int i: nums){
            if(output.empty()) break;
            if(output.front()==i) continue;
            int m1=i;
            erase(nums, m1);
            if(nums.size()<n-f){
                output.push_back(m1);
                while(nums.size()!=n){
                    nums.push_back(m1);
                }
                break;
            }
            while(nums.size()!=n){
                nums.push_back(m1);
            }
        }

        return output;
    }
};