class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int length = 0, curr = 1;
        if(nums.size()==0) return 0;
        if(nums.size()==1) return 1;
        unordered_set<int> us(nums.begin(), nums.end());
        for(int i : us){
            if(us.find(i-1)!=us.end()){
                continue;
            }else{
                while(us.find(i+1)!=us.end()){
                    curr++;
                    i++;
                }
                if(length<curr)
                    length=curr;
                curr=1;
            }
        }
        return length;
    }
};
