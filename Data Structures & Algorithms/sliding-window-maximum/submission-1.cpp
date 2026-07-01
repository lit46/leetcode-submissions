class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        int l=0, r=0;
        vector<int> output(nums.size()-k+1);
        deque<int> dq;
        while(r<nums.size()){
            while(!dq.empty()&&nums[dq.back()]<nums[r]){
            dq.pop_back();
            }
            dq.push_back(r);
            if(l>dq.front()){
                dq.pop_front();
            }
            if((r+1)>=k){
                output[l]=nums[dq.front()];
                l++;
            }
            r++;
        }
        
        return output;
    }
};
