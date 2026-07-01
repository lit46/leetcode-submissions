class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        vector<int> result(temperatures.size(),0);
        for(int i=0;i<temperatures.size();i++){
            int curr = temperatures[i];
            int j=i+1;
            int found=0;
            int count=0;
            while(j<temperatures.size()){
                count++;
                if(curr<temperatures[j]) { found++; break;}
                j++;
            }
            if(found==1) result[i]+=count;
        }
        return result;
    }
};
