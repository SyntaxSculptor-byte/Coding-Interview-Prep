class Solution {
public:
    bool f(int mask,int currplayer, int t, int n,vector<vector<int>>& dp){
        int sum=0;
        for(int i=0;i<n;i++){
            if(mask & (1<<i))sum+=(i+1);
        }
        if(sum>=t){
            if(currplayer==0)return false;
            else return true;
        }
        if(dp[currplayer][mask]!=-1)return dp[currplayer][mask];
        if(currplayer==0){
            for(int i=0;i<n;i++){
                if((mask & 1<<i))continue;
                if(f(mask|1<<i,1,t,n,dp))return dp[0][mask]=1;
            }
            return dp[0][mask]=0;
        }
        if(currplayer==1){
            for(int i=0;i<n;i++){
                if((mask & 1<<i))continue;
                if(!f(mask|1<<i,0,t,n,dp))return dp[1][mask]=0;
            }
            return dp[1][mask]=1;
        }
        return 0;
    }

    bool canIWin(int n, int t) {
        vector<vector<int>>dp(2,vector<int>(1<<(n+1),-1));
        if(t==0)return true;
        if(2*t> n*(n+1))return false;
        return f(0,0,t,n,dp);
    }
};