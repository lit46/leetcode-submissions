class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int> record;
        int size=0;
        for(string op : operations){
            if(op=="+"){
                record.push_back(record.back()+record.end()[-2]);
                size++;
            }else if(op=="D"){
                record.push_back(record.back()*2);
                size++;
            }else if(op=="C"){
                record.pop_back();
                size--;
            }else{
                record.push_back(stoi(op));
                size++;
            }
        }
        int sum=0;
        while(size!=0){
            sum+=record[size-1];
            size--;
        }
        return sum;        
    }
};