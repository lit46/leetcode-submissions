class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        int nums=0;
        sort(people.begin(),people.end());
        int i=0, j=people.size()-1;
        while(i<=j){
            if(people[j]>=limit){
                j--;
                nums++;   
            }else if(people[j]+people[i]>limit){
                j--;
                nums++;
            }else if(people[j]+people[i]<=limit){
                i++;
                j--;
                nums++;
            }else if(i==j) nums++;            
        }
        return nums;
    }
};