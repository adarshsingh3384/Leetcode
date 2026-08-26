class Solution {
public:
    string shortestBeautifulSubstring(string s, int k) {
        int minLen=INT_MAX;
        int n=s.size();
        string ans;
        int i=0,j=0;
        int oneCount=0;
        while(j<n){
            if(s[j]=='1'){
                oneCount++;
            }
            while(oneCount>=k){
                int len=j-i+1;
                string temp=s.substr(i,j-i+1);
                if(len<minLen || (len==minLen && temp<ans)){
                    minLen=len;
                    ans=temp;
                }
                if(s[i]=='1'){
                    oneCount--;
                }
                i++;
            }
            j++;
        }
        return ans;
        
    }
};