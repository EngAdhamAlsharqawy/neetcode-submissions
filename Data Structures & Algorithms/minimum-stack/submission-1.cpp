class MinStack {
    stack<pair<int, int>> stack;

public:
    MinStack() {

    }

    void push(int value) {
        if (stack.empty())
            stack.push({ value, value });
        else
            stack.push({ value, value < stack.top().second ? value : stack.top().second });
    }

    void pop() {
        stack.pop();
    }

    int top() {
        return stack.top().first;
    }

    int getMin() {
        return stack.top().second;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(value);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */