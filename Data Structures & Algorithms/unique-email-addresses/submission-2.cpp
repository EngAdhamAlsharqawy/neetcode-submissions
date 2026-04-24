class Solution {
public:
    int numUniqueEmails(const vector<string>& emails) {
        set<string> unique;
        for (const string& email : emails) {
            string local{ email.substr(0, email.find('@')) };
            local = local.substr(0, local.find('+'));
            local.erase(remove(local.begin(), local.end(), '.'), local.end());
            unique.insert(local + email.substr(email.find('@')));
        }
        return (int) unique.size();
    }
};