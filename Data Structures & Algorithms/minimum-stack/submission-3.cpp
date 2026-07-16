class MinStack {
    stack<int> data;
    stack<int> mn_stack;

public:
    MinStack() = default;

    void push(int value) {
        data.push(value);
        if (mn_stack.empty() || value <= mn_stack.top())
            mn_stack.push(value);
    }

    void pop() {
        if (data.top() == mn_stack.top())
            mn_stack.pop();
        data.pop();
    }

    int top() { return data.top(); }

    int getMin() { return mn_stack.top(); }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(value);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */