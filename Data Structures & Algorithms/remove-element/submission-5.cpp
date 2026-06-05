class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int n=nums.size();
        int k=0;
        for(int i=0;i<n;i++){
            if(nums.at(i)!=val){
                k++;
            }
        }
        for(int i=0;i<k;i++){
            if(nums.at(i)==val){
                nums.erase(nums.begin()+i);
                i--;
            }
        }

        return k;
    }
};