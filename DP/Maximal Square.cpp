class Solution {
public:
    int maximalSquare(vector<vector<char>>& arr) {
        int n = arr.size();
        int m = arr[0].size();
        vector<vector<int>> dp(n+2, vector<int>(m+2,0));
        int ans = 0 ;
        for(int i =1 ;i <= n ; i++){
            for(int j = 1 ; j<= m ; j++){
                if(arr[i-1][j-1]=='1'){
                    dp[i][j]=1;
                    int mini = min({dp[i-1][j],dp[i-1][j-1],dp[i][j-1]});
                    dp[i][j]=1+mini;
                    ans = max(ans,dp[i][j]);
                }
            }
        }

        for(auto it : dp){
            for(auto i : it) cout<<i<<" ";
            cout<<endl;
        }
        return ans*ans ;
    }
};
