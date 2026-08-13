class Solution {
public:
    int minKBitFlips(vector<int>& nums, int k) {
        int ans=0,cnt=0;
        queue<int>q;
        for(int i=0;i<nums.size();i++){
            if(!q.empty() && q.front()==i){
                q.pop();
                cnt--;
            }
            if(nums[i]==(cnt%2)){
                if(i+k>nums.size()) return -1;
                cnt++;
                ans++;
                q.push(i+k);
            }
        }
        return ans;
    }
};