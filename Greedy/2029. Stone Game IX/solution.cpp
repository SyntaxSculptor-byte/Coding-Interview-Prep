class Solution {
public:
    bool stoneGameIX(vector<int>& stones) {
        int n=stones.size();
        int c1=0,c2=0,c3=0;
        for(auto it:stones){
            if(it%3==1)c1++;
            else if(it%3==2)c2++;
            else c3++;
        }
        bool x=(c3%2==0);
        if(x){
            if(c1==0 || c2==0)return false;
            else return true;
        }
        else{
            if((c1==0 && c2>=3)|| (c2==0 && c1>=3))return true;
            return (c2-2>c1)|| (c1-2>c2);
        }
        return false;
    }
};