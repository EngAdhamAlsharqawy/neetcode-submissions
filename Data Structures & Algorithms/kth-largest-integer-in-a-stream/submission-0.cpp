class MinHeap {
    int heap_size{};
    vector<int> arr;

    int parent(int node) const {
        return node ? (node - 1) / 2 : -1;
    }

    int left(int node) const {
        int l = 2 * node + 1;
        return l < heap_size ? l : -1;
    }

    int right(int node) const {
        int r = 2 * node + 2;
        return r < heap_size ? r : -1;
    }

    void heapify_up(int node) {
        if (!node || arr[parent(node)] <= arr[node])
            return;
        swap(arr[node], arr[parent(node)]);
        heapify_up(parent(node));
    }

    void heapify_down(int node) {
        int min_child = left(node);
        if (min_child == -1)
            return;
        int r = right(node);
        if (r != -1 && arr[r] < arr[min_child])
            min_child = r;
        if (arr[node] <= arr[min_child])
            return;
        swap(arr[node], arr[min_child]);
        heapify_down(min_child);
    }

public:
    void push(int key) {
        if (heap_size != (int)arr.size())
            arr[heap_size] = key;
        else
            arr.push_back(key);
        ++heap_size;
        heapify_up(heap_size - 1);
    }

    void pop() {
        if (empty())
            return;
        arr[0] = arr[--heap_size];
        if (!empty())
            heapify_down(0);
    }

    int top() const {
        return empty() ? -1 : arr[0];
    }

    int size() const {
        return heap_size;
    }

    bool empty() const {
        return heap_size == 0;
    }
};

class KthLargest {
    int kth;
    MinHeap heap;

public:
    KthLargest(int k, vector<int>& nums) : kth(k) {
        for (int n : nums)
            add(n);
    }

    int add(int val) {
        if (heap.size() < kth)
            heap.push(val);
        else if (heap.top() < val) {
            heap.pop();
            heap.push(val);
        }
        return heap.top();
    }
};

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);
 */