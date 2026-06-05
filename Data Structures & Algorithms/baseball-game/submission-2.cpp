class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int> record;
        int top=0;
        for(int i=0;i<operations.size();i++){
            if(operations.at(i)=="+"){
                int a = record.top();
                record.pop();
                int b = record.top();
                record.pop();
                int sum = a+b;
                record.push(b);
                record.push(a);
                record.push(sum);
                top++;
            }else if(operations.at(i)=="D"){
                int prev = record.top();
                record.pop();
                int dub = prev*2;
                record.push(prev);
                record.push(dub);
                top++;
            }else if(operations.at(i)=="C"){
                record.pop();
                top--;
            }else{
                record.push(stoi(operations.at(i)));
                top++;
            }
        }
        int sum=0;
        while(top!=0){
            cout<<record.top();
            sum+= record.top();
            record.pop();
            top--;
        }
        return sum;        
    }
};