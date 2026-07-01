class Solution {
public:
    string simplifyPath(string path) {
        vector<string> directories;
        for(int i=0;i<path.size();i++){
            string cd = "";
            while(i<path.size()&&path[i]=='/'){
                i++;
            }
            while(i<path.size()&&path[i]!='/'){
                cd+=path[i];
                i++;
            }
            if(!cd.empty()) directories.push_back(cd);
        }
        vector<string> finalpath;
        for(string dir : directories){
            if(dir=="."){
                continue;
            }else if(dir==".."){
                if(!finalpath.empty()) finalpath.pop_back();
            }else{
                finalpath.push_back(dir);
            }
        }
        string res="";
        for(string dir: finalpath){
            res+="/";
            res+=dir;
        }
        if(res=="") res+="/";
        return res;
    }
};