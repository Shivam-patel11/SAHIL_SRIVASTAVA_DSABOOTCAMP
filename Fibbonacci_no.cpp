class Solution {
public:
    int fib(int n) {
        unordered_map<int,int>mp;
        return fibNumber(n,mp);
    }
    int fibNumber(int n,unordered_map<int,int>&mp){
        if(n<=1){
            return n;
        }
        int currKey=n;
        if(mp.find(n)!=mp.end()){
            return mp[n];
        }
        int a=fib_Number(n-1,mp);
        int b=fib_Number(n-2,mp);
         mp[currKey]=a+b;
        return a+b;
    }
};
