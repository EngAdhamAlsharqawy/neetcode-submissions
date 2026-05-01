class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        unordered_set<string> distinct, duplicate;
        for (const string& str : arr)
            if (duplicate.count(str))
                continue;
            else if (!distinct.insert(str).second)
                distinct.erase(str), duplicate.insert(str);
        for (const string& str : arr)
            if (!(k -= distinct.count(str)))
                return str;
        return "";
    }
};