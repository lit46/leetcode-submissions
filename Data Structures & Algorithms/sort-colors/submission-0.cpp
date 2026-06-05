class Solution {
public:
    void sortColors(vector<int>& nums) {
        int rcount=0,wcount=0,bcount=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0)
                rcount++;
            else if(nums[i]==1)
                wcount++;
            else if(nums[i]==2)
                bcount++;
        }
        int i=0,r=0,w=0,b=0;
        while(r<rcount){
            nums[i]=0;
            i++;
            r++;
        }
        while(w<wcount){
            nums[i]=1;
            i++;
            w++;
        }
        while(b<bcount){
            nums[i]=2;
            i++;
            b++;
        }
    }
};