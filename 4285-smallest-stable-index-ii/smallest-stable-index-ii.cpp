class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int>suffixMin(n);
        suffixMin[n - 1] = nums[n - 1];

        for(int i=n-2; i>=0; i--){
            suffixMin[i] = min(nums[i], suffixMin[i+1]);
        }
        vector<int>prefixMax(n);
        prefixMax[0] = nums[0];
        for(int j =1; j<n; j++){
            prefixMax[j] = max(nums[j], prefixMax[j-1]);
        }

        for(int i =0; i<n; i++){
            int score = prefixMax[i] - suffixMin[i];
            if(score <= k){
                return (i);
            }
        } 
        return -1;
    }
};