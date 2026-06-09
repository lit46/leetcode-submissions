class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size();
        int f = n/3;
        vector<int> output;
        unordered_map<int, int> freq;
        for(int i : nums){
            freq[i]++;
        }
        for(const auto& [key,value]: freq){
            if(freq[key]>f){
                output.push_back(key);
            }
        }
        return output;
    }
};