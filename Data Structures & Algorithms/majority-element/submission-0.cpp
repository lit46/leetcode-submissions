class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int, int> freq;
        for(int i=0;i<n;i++){
            freq[nums.at(i)]++;
            if(freq[nums.at(i)]>n/2){
                return nums.at(i);
            }
        }
        return 0;
    }
};