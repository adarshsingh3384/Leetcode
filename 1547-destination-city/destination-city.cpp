class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        int n = paths.size();
        if(paths.size()==1){
            return paths[0][1];
        }
        unordered_map<string,string>mp;
        for(int i=0;i<n;i++){
            mp[paths[i][0]]=paths[i][1];
        }
        for(int i=0;i<n;i++){
            if(!mp.count(paths[i][1])){
                return paths[i][1];
            }
        }
        return "";
    }
};