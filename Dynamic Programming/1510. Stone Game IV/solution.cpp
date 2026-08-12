class Solution {
public:
    bool f(int n, vector<int>& sq, vector<int>& dp){
        if(n<1)return 0;
        if(dp[n]!=-1)return dp[n];
        for(auto it:sq){
            if(it>n)break;
            if(!f(n-it,sq,dp))return dp[n]=1;
        }
        return dp[n]=0;
    }
    bool winnerSquareGame(int n){
        vector<int>sq;
        for(int i=1;i*i<=n;i++){
            sq.push_back(i*i);
        }
        vector<int>dp(n+1,-1);
        return f(n,sq,dp);
    }
};