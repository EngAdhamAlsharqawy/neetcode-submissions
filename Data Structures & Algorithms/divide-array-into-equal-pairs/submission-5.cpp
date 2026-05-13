class Solution {
public:
    bool divideArray(vector<int>& nums) {
        unordered_set<int> nums_set;
        for (int n : nums)
			if (nums_set.count(n))
				nums_set.erase(n);
			else
				nums_set.insert(n);
        return nums_set.empty();
    }
};