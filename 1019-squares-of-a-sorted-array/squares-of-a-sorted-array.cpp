class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();

        vector<int> ans(n);


        int i = 0;
        int j = n - 1;
        int p = n - 1;

        while (i <= j) {

            if (abs(nums[j]) > abs(nums[i])) {
                ans[p] = nums[j] * nums[j];
                j--;
            }
            else {
                ans[p] = nums[i] * nums[i];
                i++;
            }

            p--;
        }

        return ans;
    }
};