class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        unordered_set<string> distinct, duplicate;
        for (const string& str : arr)
            if (!distinct.insert(str).second or duplicate.count(str))
                distinct.erase(str), duplicate.insert(str);
        for (const string& str : arr)
            if (!(k -= distinct.count(str)))
                return str;
        return "";
    }
};