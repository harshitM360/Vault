class Solution {
public:
  int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int start = prices[0];
        int maxi = 0;
        for(int i=1 ;i<n; i++){
            start = min(prices[i],start);
            maxi = max (maxi , prices[i] - start); 
        }
        return maxi;   
    }
};
