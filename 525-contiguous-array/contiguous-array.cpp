class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int n=nums.size();
        int maxLen=0;
        unordered_map<int,int>mp;
        mp[0]=-1;
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=(nums[i]==1?1:-1);
            if(mp.find(sum)!=mp.end()){
                maxLen=max(maxLen,i-mp[sum]);
            }
            else if(mp.find(sum)==mp.end()){
                mp[sum]=i;
            }

        }
        return maxLen;
        
    }
};