class Solution {
public:
    int numUniqueEmails(const vector<string>& emails) {
        set<string> unique;
        for (const string& email : emails) {
            string local;
            int i{};
            while (email[i] != '+' && email[i] != '@') {
                if (email[i] != '.')
                    local += email[i];
                ++i;
            }
            while (email[i] != '@') ++i;
            string domain{ email.substr(i + 1) };
            unique.insert(local + '@' + domain);
        }
        return unique.size();
    }
};