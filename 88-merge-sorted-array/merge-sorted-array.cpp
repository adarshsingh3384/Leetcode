class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int l=nums1.size();

        int i=m-1;
        int j=n-1;
        int p=l-1;

        while(i>=0 && j>=0){
            if(nums1[i]<nums2[j]){
                nums1[p]=nums2[j];

                j--;
                p--;
            }
            else{
                nums1[p]=nums1[i];
                p--;
                i--;
            }
        }
        while(i>=0){
            nums1[p]=nums1[i];
            i--;
            p--;
        }
        while(j>=0){
            nums1[p]=nums2[j];
            p--,j--;
        }

        
    }
};