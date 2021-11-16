class Solution {
public:
    int rob(vector<int>& nums) {
        unordered_map<int,int>mp;
        return maxProfit(0,nums,mp);
    }
int maxProfit(int currIndex,vector<int>&nums,unordered_map<int,int>&mp){
        if(currIndex >= nums.size()){
            return 0;
        }
      int currKey=currIndex;
    if(mp.find(currKey)!=mp.end()){
        return mp[currKey];
    }
        int robHouse=nums[currIndex]+maxProfit(currIndex+2,nums,mp);
        int noRob=maxProfit(currIndex+1,nums,mp);
        mp[currKey]=max(robHouse,noRob);        
        return max(robHouse,noRob);
    }
};
