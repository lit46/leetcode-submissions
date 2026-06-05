class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        map<int, int> freq;
        for(int i=0;i<nums.size();i++){
            freq[nums[i]]++;
        }
        int j=0;
        for(auto& entry : freq){
            for(int i=0;i<entry.second;i++){
                nums[j] = entry.first;
                j++;
            }

        }
        return nums;
    }
};