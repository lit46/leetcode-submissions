class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        vector<int> asstack;
        asstack.push_back(asteroids[0]);
        for(int i=1;i<asteroids.size();i++){
            int flag=0;
            while(!asstack.empty()&&asstack.back()>0&&asteroids[i]<0){
                if(asstack.back()>abs(asteroids[i])){
                    flag=1;
                    break;
                }
                if(asstack.back()==abs(asteroids[i])){
                    flag=1;
                    asstack.pop_back();
                    break;
                }
                if(asstack.back()<abs(asteroids[i])){
                    asstack.pop_back();
                }
            }
            if(flag==0) asstack.push_back(asteroids[i]);
        }
        return asstack;
    }
};