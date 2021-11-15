class Solution {
public:
    int climbStairs(int n){
      unordered_map<int,int>mp;
        return total(0,n,mp);
    }
int total(int currentStair,int targetStair,unordered_map<int,int>&mp){
        if(currentStair==targetStair){
            return 1;
        }
        if(currentStair > targetStair){
            return 0;
        }
        int currKey=currentStair;
        if(mp.find(currKey) != mp.end()){
            return mp[currKey];
        }
        int onestep=total(currentStair+1,targetStair,mp);
        int twostep=total(currentStair+2,targetStair,mp);
        mp[currKey]=onestep+twostep;
        return onestep+twostep;
    }
};