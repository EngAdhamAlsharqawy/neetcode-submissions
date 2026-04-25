class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        for (int i{}; n and (i < flowerbed.size()); ++i)
            if (flowerbed[i] or (i and flowerbed[i - 1]) or (i != flowerbed.size() - 1 and flowerbed[i + 1])) 
                continue;
            else
                ++flowerbed[i], --n;
        return !n;
    }
};