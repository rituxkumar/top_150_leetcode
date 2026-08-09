class Solution {
public:
    double minPrice(vector<int>& prices, vector<int>& discounts) {
        double result = 0;
        sort(discounts.begin(), discounts.end(), greater<int>());
        sort(prices.begin(), prices.end(), greater<int>());
        int d = discounts.size();
        int p = prices.size();
        int i = 0;
        for (auto p : prices) {
            if (i < d) {
                int dis = discounts[i];
                i++;
                result += (p * (100 - dis)) / 100.0;
            } else {
                result += p;
            }
        }
        return result;
    }
};