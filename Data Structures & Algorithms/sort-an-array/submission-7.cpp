class Solution {
public:
    int partition(vector<int>&nums, int low, int high){
        int pivot=nums[high];

        int i=low-1;

        for(int j=low;j<high;j++){
            if(nums[j]<pivot){
                i++;
                swap(nums[i],nums[j]);
            }
        }
        swap(nums[i+1], nums[high]);

        return i+1;
    }

    void quickSort(vector<int>& nums, int left, int right){
        if(left>=right) return;
        
        int p = partition(nums, left, right);

        quickSort(nums, left, p-1);
        quickSort(nums, p+1, right);
    }
    vector<int> sortArray(vector<int>& nums) {
        quickSort(nums, 0, nums.size()-1);
        return nums;
    }
};