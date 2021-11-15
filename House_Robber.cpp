class Solution {
public:
    int rob(vector<int>& nums) {
        unordered_map<int,int>mp;
        return ans(0,nums,mp);
    }
int ans(int currIndex,vector<int>&nums,unordered_map<int,int>&mp){
        if(currIndex >= nums.size()){
            return 0;
        }
      int currKey=currIndex;
    if(mp.find(currKey)!=mp.end()){
        return mp[currKey];
    }
        int a=nums[currIndex]+ans(currIndex+2,nums,mp);
        int b=ans(currIndex+1,nums,mp);
        mp[currKey]=max(a,b);        
        return max(a,b);
    }
};