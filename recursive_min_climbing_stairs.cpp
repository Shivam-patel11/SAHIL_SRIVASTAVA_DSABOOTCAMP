class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int a=ans(cost,0);
        int b=ans(cost,1);
        // int b=mp[1];
        return min(a,b);
    }
int ans(vector<int>&cost,int currIndex){
      if(currIndex==cost.size()){
          return 0;
      }
      if(currIndex > cost.size()){
          return (INT_MAX)/2; // or better 1000 in contraint 
    }
    // INT_MAX will give over flow
    
    int onejump=cost[currIndex]+ans(cost,currIndex+1); 
    int twojump=cost[currIndex]+ans(cost,currIndex+2);
    return min(onejump,twojump);
    }
};