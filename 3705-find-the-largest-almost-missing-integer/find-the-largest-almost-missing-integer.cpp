class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
        int n = nums.size();
        int maxi = INT_MIN;
        if(k==n){
            return *max_element(begin(nums),end(nums));
        }
        unordered_map<int, int> mp;
        for (int i = 0; i <= n - k; i++) {
            for (int j = i; j < i + k; j++) {
                mp[nums[j]]++;
            }
        }
        for (auto& it : mp) {
            if (it.second==1){
                maxi=max(maxi,it.first);
            }     
        }
        return maxi==INT_MIN?-1:maxi;
    }
};