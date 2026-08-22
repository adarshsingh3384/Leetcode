class Solution {
public:
    int dp[501][501];
    int solve(string& word1 , string& word2 , int i , int j , int n , int m){
        if(i==n){
            return m-j; //  itne insertions lagenge
        }
        if(j==m){
            return n-i; // itne deletions krne padenge word1 se 
        }
        if(dp[i][j]!=-1){
            return dp[i][j];
        }
        if(word1[i]==word2[j]){
            return dp[i][j]=solve(word1,word2,i+1,j+1,n,m);
        }
        return dp[i][j]=1+min({solve(word1,word2,i+1,j,n,m),solve(word1,word2,i,j+1,n,m),solve(word1,word2,i+1,j+1,n,m)});
    }
    int minDistance(string word1, string word2) {
        int n=word1.size();
        int m=word2.size();
        memset(dp,-1,sizeof(dp));
        return solve(word1,word2,0,0,n,m);
        
    }
};