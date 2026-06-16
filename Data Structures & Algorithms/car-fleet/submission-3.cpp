class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        map<int, double> fleets;
        for(int i=0;i<position.size();i++){
            double time = (double)(target - position[i]) / speed[i];
            fleets.insert({position[i],time});
        }
        int count = 0;
        double fleetTime=0;
        for(auto it=fleets.rbegin();it!=fleets.rend();++it){
            if(it->second>fleetTime){
                count++;
                fleetTime=it->second;
            }
        }
        return count;
    }
};