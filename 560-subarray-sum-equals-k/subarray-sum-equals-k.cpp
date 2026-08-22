class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        // int n=nums.size();
        // unordered_map<int,int>mp;
        // mp[0]=1;
        // int sum=0;
        // int ans=0;
        // for(int i=0;i<n;i++){
        //     sum+=nums[i];
        //     if(mp.count(sum-k)){
        //         ans+=mp[sum-k]; //1
        //     }
        //     mp[sum]++;
        // }
        // // 0 2
        // // 1 1
        // return ans;

        int n =  nums.size();
        int count = 0;
        for(int i =0; i< n; i++){
            int sum = 0;
            for(int j = i; j<n ; j++){
                sum+=nums[j];
                if(sum == k){
                    count++;
                }
            }
        }
        return count;
    }
};