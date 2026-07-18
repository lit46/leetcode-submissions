class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        heights.push_back(0);
        stack<int> idx;
        vector<pair<int,int>> data(heights.size());
        int pos=0;
        while(pos<heights.size()){
            if(!idx.empty()){
                if(heights[idx.top()]<=heights[pos]){
                    if(heights[idx.top()]<heights[pos]) data[pos].first=pos;
                    else data[pos].first = data[idx.top()].first;
                    idx.push(pos);
                }else{
                    while(!idx.empty()&&heights[idx.top()]>heights[pos]){
                        int t = idx.top();
                        idx.pop();
                        data[t].second=pos;
                        data[pos].first=data[t].first;
                    }
                    if(!idx.empty()&&heights[idx.top()]==heights[pos]) data[pos].first=data[idx.top()].first;
                    idx.push(pos);
                }
            }else{
                idx.push(pos);
                data[pos].first=pos;
            }
            pos++;
        }
        int maxarea=0;
        for(int i=0;i<data.size();i++){
            maxarea = max(maxarea,((data[i].second-data[i].first)*heights[i])); 
        }
        return maxarea;
    }
};
