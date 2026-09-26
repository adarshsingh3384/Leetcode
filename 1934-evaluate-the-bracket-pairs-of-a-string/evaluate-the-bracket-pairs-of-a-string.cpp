class Solution {
public:
    string evaluate(string s, vector<vector<string>>& knowledge) {
        int n = s.size();
        int i=0;
        string result = "";

        unordered_map<string, string> map;

         for(auto x : knowledge) {
            map[x[0]] = x[1];
        }

        while(i < n){
            if(isalpha(s[i])){
                result.push_back(s[i]);
            }
            else {
                i++;
                string temp ="";
                while (s[i] != ')') {
                    temp.push_back(s[i]);
                    i++;
                }
                 if(map.count(temp)) {
                    result += map[temp];
                }
                else {
                    result += "?";
                }
            }
            i++;
        }
        return result;
    }
};