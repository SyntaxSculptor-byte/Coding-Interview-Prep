class Solution {
public:
    int l; string s;
    long long dp[16][2];

    long long f1(int pos,int tight,vector<int>&v){
        if(pos+s.size()==v.size()){
            if(tight==1){
                int i=0;
                while(i<s.size()){
                    if(s[i]-'0'<v[pos])return 1;
                    if(s[i]-'0'>v[pos])return 0;
                    i++;
                    pos++;
                }
                return 1;
            }
            return 1;
        }
        if(dp[pos][tight]!=-1)return dp[pos][tight];
        int maxD=(tight==1)?v[pos]:l;
        long long ans=0;
        for(int i=0;i<=min(l,maxD);i++){
            ans+=f1(pos+1,(tight && (v[pos]==i)),v);
        }
        return dp[pos][tight]=ans;
    }

    long long f(long long x){
        if(x<stoll(s))return 0;
        if(s.size()==(int)ceil(log10(x)))return 1;
        vector<int>v;
        while(x){
            v.push_back(x%10);
            x/=10;
        }
        reverse(v.begin(),v.end());
        memset(dp,-1,sizeof(dp));
        return f1(0,1,v);
    }

    long long numberOfPowerfulInt(long long start, long long finish, int limit, string S) {
        l=limit;
        s=S;
        return f(finish)-f(start-1);
    }
};