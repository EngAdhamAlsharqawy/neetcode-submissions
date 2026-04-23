class Solution {
public:
    int numUniqueEmails(const vector<string>& emails) {
        set<string> unique;
        for (const string& email : emails) {
            string clean;
            bool local{ true }, ignore{};
            for (char c : email) {
                if (c == '@')
                    local = ignore = false;
                if (local and (c == '.' or c == '+' or ignore)) {
                    if (c == '+') ignore = true;
                    continue;
                }
                clean += c;
            }
            unique.insert(clean);
        }
        return unique.size();
    }
};