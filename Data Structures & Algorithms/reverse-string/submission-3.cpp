class Solution {
public:
    void reverseString(vector<char>& s) {
        stack<char> stk;
        for (const char& c : s)
            stk.push(c);
        for (char& c : s)
            c = stk.top(), stk.pop();
    }
};