class MyHashSet {
public:
    int M;
    vector<vector<int>>bucket;
    int getIndex(int key){
        return key%M;
    }
    MyHashSet() {
        M=15000;
        bucket=vector<vector<int>>(M);
    }
    
    void add(int key) {
        int idx=getIndex(key);

        auto it = find(bucket[idx].begin(),bucket[idx].end(),key);

        if(it==bucket[idx].end()){
            bucket[idx].push_back(key);
        }
    }
    
    void remove(int key) {
        int idx=getIndex(key);

        auto it = find(bucket[idx].begin(),bucket[idx].end(),key);
        
        if(it!=bucket[idx].end()){
            bucket[idx].erase(it);
        }
        
    }
    
    bool contains(int key) {
         int idx=getIndex(key);

        auto it = find(bucket[idx].begin(),bucket[idx].end(),key);

        return it!=bucket[idx].end();
        
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */