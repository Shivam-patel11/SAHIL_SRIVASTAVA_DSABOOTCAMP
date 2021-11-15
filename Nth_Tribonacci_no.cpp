class Solution {
public:
    int tribonacci(int n) {
        unordered_map<int,int>mp;
        return ans(n,mp);
    }
    int ans(int n,unordered_map<int,int>&mp){
        if(n <= 1){
            return n;
        }
        if(n==2){
            return 1;
        }
        int currKey=n;
        if(mp.find(currKey)!=mp.end()){
            return mp[currKey];
        }
        int a=ans(n-1,mp);
        int b=ans(n-2,mp);
        int c=ans(n-3,mp);
         mp[currKey]=a+b+c;
        return a+b+c;
    }
};