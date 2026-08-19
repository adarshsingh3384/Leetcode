class Solution {
public:
    int n;
    int dp[100001][3][4];
    int solve(vector<int>& nums , int idx , int buy , int cap){
        if(idx>=n || cap==0){
            return 0;
        }
        if(dp[idx][buy][cap]!=-1){
            return dp[idx][buy][cap];
        }
        int take=0,skip=0;
        if(buy==0){
            take=-nums[idx]+solve(nums,idx+1,1,cap);
            skip=solve(nums,idx+1,0,cap);
        }
        else{
            take=nums[idx]+solve(nums,idx+1,0,cap-1);
            skip=solve(nums,idx+1,1,cap);
        }
        return dp[idx][buy][cap]=max(take,skip);
    }
    int maxProfit(vector<int>& prices) {
        n=prices.size();

        memset(dp,-1,sizeof(dp));

        return solve(prices,0,0,2);
    }
};