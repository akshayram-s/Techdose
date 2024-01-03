class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minimum=prices[0];
        int profit=0;
        int size=prices.size();
        for(int i=1;i<size;i++){
            int diff=prices[i]-minimum;
            profit=max(profit,diff);
            minimum=min(minimum,prices[i]);
        }
        return profit;
    }
};