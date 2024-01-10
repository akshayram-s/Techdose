class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        int s=coins.size();
        int dp[s+1][amount+1];
        for(int i=0;i<s+1;i++){
            dp[i][0]=0;
        }
        for(int i=0;i<amount+1;i++){
            dp[0][i]=INT_MAX-1;
        }
        for(int i=1;i<s+1;i++){
            for(int j=1;j<amount+1;j++){
                if(coins[i-1]<=j){
                    dp[i][j]=min(1+dp[i][j-coins[i-1]],dp[i-1][j]);
                }
                else{
                    dp[i][j]=dp[i-1][j];
                }
            }
        }
        
        return dp[s][amount]!=INT_MAX-1?dp[s][amount]:-1;
    }
};