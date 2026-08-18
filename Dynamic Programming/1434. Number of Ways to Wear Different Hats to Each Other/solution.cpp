class Solution {
public:
    const int MOD=1000000007;
    int numberWays(vector<vector<int>>& hats) {
        int n=hats.size();
        vector<vector<int>>ht(41);
        for(int i=0;i<n;i++){
            for(auto it:hats[i]){
                ht[it].push_back(i);
            }
        }
        vector<vector<int>>dp(1<<n,vector<int>(41,0));
        dp[0][0]=1;
        for(int mask=0;mask<(1<<n);mask++){
            for(int i=0;i<41;i++){
                if(dp[mask][i]==0)continue;
                for(int j=i+1;j<41;j++){
                    for(auto it:ht[j]){
                        if(mask & 1<<it)continue;
                        dp[mask|1<<it][j]=(dp[mask|1<<it][j]+dp[mask][i])%MOD;
                    }
                }
            }
        }
        int full=(1<<n)-1;
        long long ans=0;
        for(int i=0;i<41;i++){
            ans=(ans+dp[full][i])%MOD;
        }
        return ans;
    }
};