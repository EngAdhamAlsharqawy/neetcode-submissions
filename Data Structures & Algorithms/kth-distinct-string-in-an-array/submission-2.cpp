class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        for (int i{}; i < arr.size(); ++i) {
            int j{};
            for (; j < arr.size(); ++j)
                if (i == j)
                    continue;
                else if (arr[i] == arr[j])
                    break;
            if (!(k -= j == arr.size()))
                return arr[i];
        }
        return "";
    }
};