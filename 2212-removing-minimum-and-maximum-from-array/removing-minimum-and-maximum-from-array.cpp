class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int n=nums.size();
        int maxi=INT_MIN,maxIdx;
        int mini=INT_MAX,minIdx;

        for(int i=0;i<n;i++){
            if(nums[i]>maxi){
                maxi=nums[i];
                maxIdx=i;
            }
            if(nums[i]<mini){
                mini=nums[i];
                minIdx=i;
            }
        }

        int c1=1+max(minIdx,maxIdx);
        int c2=n-min(minIdx,maxIdx);
        int c3=min(minIdx+1+n-maxIdx,maxIdx+1+n-minIdx);
        return min({c1,c2,c3});
        
    }
};