class MyHashSet {
    list<int> linkedList;
public:
    MyHashSet() {

    }

    void add(int key) {
        if (!contains(key))
            linkedList.push_back(key);
    }

    void remove(int key) {
        if (contains(key))
            linkedList.erase(find(linkedList.begin(), linkedList.end(), key));
    }

    bool contains(int key) {
        return find(linkedList.begin(), linkedList.end(), key) != linkedList.end();
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */