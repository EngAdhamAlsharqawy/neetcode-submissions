class MyHashSet {
    vector<bool> data;
public:
    MyHashSet() : data(10e6 + 1, false) {}

    void add(int key) {
        data[key] = true;
    }

    void remove(int key) {
        data[key] = false;
    }

    bool contains(int key) {
        return data[key];
    }
};