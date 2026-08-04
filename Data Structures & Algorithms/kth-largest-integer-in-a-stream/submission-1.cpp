class KthLargest {
    int kth;
    priority_queue<int, vector<int>, greater<int>> priority_q;

public:
    KthLargest(int k, vector<int>& nums) : kth(k) {
        for (int n : nums)
            add(n);
    }

    int add(int val) {
        if (priority_q.size() < kth)
            priority_q.push(val);
        else if (priority_q.top() < val) {
            priority_q.pop();
            priority_q.push(val);
        }
        return priority_q.top();
    }
};

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);
 */