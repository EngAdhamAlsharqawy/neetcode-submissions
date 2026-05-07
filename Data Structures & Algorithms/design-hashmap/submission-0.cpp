class MyHashMap {
    vector<int> idx;
    vector<int> data;
public:
    MyHashMap() : idx(10e6 + 1, -1) {}
    
    void put(int key, int value) {
        if (idx[key] != -1)
            data[idx[key]] = value;
        else {
           idx[key] = data.size();
           data.push_back(value); 
        }
    }
    
    int get(int key) {
        return idx[key] != -1 ? data[idx[key]] : -1;
    }
    
    void remove(int key) {
        idx[key] = -1;
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */