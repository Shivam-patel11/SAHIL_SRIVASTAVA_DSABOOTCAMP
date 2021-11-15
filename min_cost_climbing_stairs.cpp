class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        unordered_map<int,int>mp;
        int a=ans(cost,0,mp);
        int b=ans(cost,1,mp);
        // int b=mp[1];
        return min(a,b);
    }
int ans(vector<int>&cost,int currIndex,unordered_map<int,int>&mp){
      if(currIndex==cost.size()){
          return 0;
      }
      if(currIndex > cost.size()){
          return (INT_MAX)/2; // or better 1000 in contraint 
    }
    // INT_MAX will give over flow
      int currKey=currIndex;
    if(mp.find(currKey) != mp.end()){
        return mp[currKey];
    }
    int onejump=cost[currIndex]+ans(cost,currIndex+1,mp); 
    int twojump=cost[currIndex]+ans(cost,currIndex+2,mp);
    mp[currKey]=min(onejump,twojump);
    return min(onejump,twojump);
    }
};