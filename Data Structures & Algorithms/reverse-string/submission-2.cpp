class Solution {
public:
    void reverseString(vector<char>& s) {
        reverseString(s, 0, s.size() - 1);
    }
private:
    void reverseString(vector<char>& s, int l, int r) {
        if (r < l)
            return;
        swap(s[l], s[r]);
        reverseString(s, l + 1, r - 1);
    }
};