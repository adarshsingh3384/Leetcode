class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int n = nums.size();

        vector<int> even, odd, ans;

        for(auto num : nums){
            if(num % 2 == 0){
                even.push_back(num);
            }
            else{
                odd.push_back(num);
            }
        }
        for(auto num : even){
            ans.push_back(num);
        }
        for(auto num : odd){
            ans.push_back(num);
        }
        return ans;
    }
};