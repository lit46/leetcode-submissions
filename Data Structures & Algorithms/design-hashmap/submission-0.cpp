class MyHashMap {
private:
    vector<int> data;
    vector<int> wskey;
public:
    MyHashMap() {
        
    }
    
    void put(int key, int value) {
        auto it = find(wskey.begin(),wskey.end(),key);
        if(it!=wskey.end()){
            int idx = it-wskey.begin();
            data.at(idx)=value;
        }else{
            wskey.push_back(key);
            data.push_back(value);
        }
    }
    
    int get(int key) {
        auto it = find(wskey.begin(),wskey.end(),key);
        if(it!=wskey.end()){
            int idx = it-wskey.begin();
            return data[idx];
        }else{
            return -1;
        }
    }
    
    void remove(int key) {
        auto it = find(wskey.begin(),wskey.end(),key);
        if(it!=wskey.end()){
            int idx = it-wskey.begin();
            data[idx]=-1;
        }
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */