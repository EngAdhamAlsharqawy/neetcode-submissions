class Solution {
public:
    int firstUniqChar(string s) {
        int firstUniq = s.size();
        for (char ch{ 'a' }; ch <= 'z'; ++ch) {
            int firstIdx = s.find(ch), lastIdx = s.rfind(ch);
            if (firstIdx != string::npos and firstIdx == lastIdx)
                firstUniq = min(firstUniq, firstIdx);
        }
        return firstUniq == s.size() ? -1 : firstUniq;
    }
};