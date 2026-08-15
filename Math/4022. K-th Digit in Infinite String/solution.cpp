class Solution {
public:
    int kthDigit(long long k) {
        if(k<=9) return k;
        long long n=k-9;
        long long len=2;
        long long gs=180;
        while(n>gs){
            n-=gs;
            len++;
            gs=90*len*(long long)pow(10,len-2);
        }
        long long a=10*len;
        long long slotn=(n-1)/a;
        long long id=(n-1)%a;
        long long pos=(n%len);
        if(pos==0)pos=1;
        else pos=len-pos+1;
        long long base=pow(10,len-1);
        long long m=base+(slotn*10);
        int ans=0;
        if((base/10 + slotn) % 2 == 0){
            m+=(id/len);
            while(pos){
                ans=m%10;
                m/=10;
                pos--;
            }
        }
        else{
            m+=(9-(id/len));
            while(pos){
                ans=m%10;
                m/=10;
                pos--;
            }
        }
        return ans;
    }
};