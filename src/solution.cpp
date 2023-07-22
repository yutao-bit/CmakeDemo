#include "solution.h"

    int Solution::rob(vector<int>& nums){
        if(nums.size() == 0)return 0;
        else if(nums.size() == 1)return nums[0];
        else if(nums.size() == 2)return max(nums[0],nums[1]);//max(a,b)
        
        int res = 0;
        res = max(nums[0],nums[1]);
        vector<int>dp(nums.size(),0);
        dp[0] = nums[0];
        dp[1] = res;
        for(int i = 2; i < nums.size(); i++){
            dp[i] = max(dp[i-1],dp[i-2]+nums[i]);
            if(res < dp[i])res = dp[i]; 
        }
        return res;
    }