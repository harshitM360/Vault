class Solution {
public:
    int maxProfit(vector<int>& prices) {
    int n = prices.size();
    int l = 0;
    int r = 1;
    int maxProfit = 0;

    while (r < n) {
        if (prices[r] > prices[l]) {
            maxProfit = max(maxProfit, prices[r] - prices[l]);
        } else {
            l = r;
        }
        r++;
    }
    return maxProfit;
 
    }
};
