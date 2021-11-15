class Solution {
public:
    int fib(int n) {
        unordered_map<int,int>mp;
        return ans(n,mp);
    }
    int ans(int n,unordered_map<int,int>&mp){
        if(n<=1){
            return n;
        }
        int currKey=n;
        if(mp.find(n)!=mp.end()){
            return mp[n];
        }
        int a=ans(n-1,mp);
        int b=ans(n-2,mp);
         mp[currKey]=a+b;
        return a+b;
    }
};