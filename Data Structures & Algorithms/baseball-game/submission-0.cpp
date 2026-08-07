class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int> operations_stack;
        for (string& o : operations) {
            if (isdigit(o[0]) || o[0] == '-') {
                operations_stack.push(stoi(o));
            } else if (o == "+") {
                int n1 = operations_stack.top();
                operations_stack.pop();
                int n2 = operations_stack.top();
                operations_stack.pop();
                operations_stack.push(n2);
                operations_stack.push(n1);
                operations_stack.push(n1 + n2);
            } else if (o == "D") {
                operations_stack.push(2 * operations_stack.top());
            } else if (o == "C") {
                operations_stack.pop();
            }
        }
        int score{};
        while (!operations_stack.empty()) {
            score += operations_stack.top();
            operations_stack.pop();
        }
        return score;
    }
};