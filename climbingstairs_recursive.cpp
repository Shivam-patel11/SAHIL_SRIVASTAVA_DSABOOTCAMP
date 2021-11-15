class Solution {
public:
    int climbStairs(int n){
        return total(0,n);
    }
int total(int currentStair,int targetStair){
        if(currentStair==targetStair){
            return 1;
        }
        if(currentStair > targetStair){
            return 0;
        }
    
        int onestep=total(currentStair+1,targetStair);
        int twostep=total(currentStair+2,targetStair);
    
        return onestep+twostep;
    }
};