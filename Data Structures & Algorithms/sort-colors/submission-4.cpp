class Solution {
public:
    void sortColors(vector<int>& nums) {
        int zero=0, i=0, two=nums.size()-1;
        while(i<=two){
            if(nums[i]==0){
                int temp = nums[i];
                nums[i]=nums[zero];
                nums[zero]=temp;
                zero++;
            }else if(nums[i]==2){
                int temp=nums[i];
                nums[i]=nums[two];
                nums[two]=temp;
                two--;
                i--;
            }
            i++;
        }
    }
};