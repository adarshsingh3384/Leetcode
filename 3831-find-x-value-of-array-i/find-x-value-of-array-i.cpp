class Solution {
public:
    vector<long long> resultArray(vector<int>& nums, int k) {
        vector<long long> ans(k, 0);
        vector<long long> prev(k, 0);

        for(int num : nums) {
            vector<long long> curr(k, 0);
            int rem = num % k;
            curr[rem]++;

            for(int j = 0; j < k; j++) {
                if(prev[j] > 0) {
                    int newRem = (j * rem) % k;
                    curr[newRem] += prev[j];
                }
            }
            for(int j = 0; j < k; j++) {
                ans[j] += curr[j];
            }
            prev = curr;
        }
        return ans;
    }
};