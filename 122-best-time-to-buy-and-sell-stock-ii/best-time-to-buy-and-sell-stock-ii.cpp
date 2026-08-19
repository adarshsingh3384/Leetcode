class Solution {
public:
    int n;
    int dp[100001][3];
    int solve(vector<int>& nums , int idx , int buy){
        if(idx>=n){
            return 0;
        }
        if(dp[idx][buy]!=-1){
            return dp[idx][buy];
        }
        int take=0,skip=0;
        if(buy==0){
            take=-nums[idx]+solve(nums,idx+1,1);
            skip=solve(nums,idx+1,0);
        }
        else{
            take=nums[idx]+solve(nums,idx+1,0);
            skip=solve(nums,idx+1,1);
        }
        return dp[idx][buy]=max(take,skip);
    }
    int maxProfit(vector<int>& prices) {
        n=prices.size();

        memset(dp,-1,sizeof(dp));

        return solve(prices,0,0);
    }
};