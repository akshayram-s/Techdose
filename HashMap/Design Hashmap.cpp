class MyHashMap {
public:
    MyHashMap() {
        
    }
    unordered_map<int,int>mp;
    void put(int key, int value) {
        mp[key]=value;
    }
    
    int get(int key) {
        if(mp.find(key)!=mp.end()){
            return mp[key];
        }
        return -1;
    }
    
    void remove(int key) {
        mp.erase(key);
    }
};