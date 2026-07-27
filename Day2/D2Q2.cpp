class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxP = 0;
        int currentLowest = prices[0];
        for(int i = 0; i < prices.size(); i++) {
            if (prices[i] < currentLowest) {
                currentLowest = prices[i];
            }
            int current = prices[i]  - currentLowest;
            if(maxP < current) {
                maxP = current;
            }
        }
        return maxP;
    }
};
