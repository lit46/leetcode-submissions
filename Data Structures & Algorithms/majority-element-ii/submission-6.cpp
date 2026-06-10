class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size();
        int f = n/3;
        vector<int> output;
        int c1, c2, count1=0, count2=0;
        for(int i : nums){
            if(count1==0){
                c1=i;
                count1++;
                continue;
            }else if(count2==0&&i!=c1){
                c2=i;
                count2++;
                continue;
            }else{
                if(i==c1){
                    count1++;
                }else if(i==c2){
                    count2++;
                }else if(i!=c1&&i!=c2){
                    count1--;
                    count2--;
                }
            }
        }
        count1=0;
        count2=0;
        for(int i:nums){
            if(i==c1) count1++;
            if(i==c2) count2++;
        }
        if(count1>f) output.push_back(c1);
        if(count2>f) output.push_back(c2);

        return output;
    }
};