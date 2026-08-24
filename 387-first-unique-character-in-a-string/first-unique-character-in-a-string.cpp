class Solution {
public:
    int firstUniqChar(string s) {
        int n = s.size();
        vector<int> count(26, 0);

        for (char ch : s) {
            count[ch - 'a']++;
        }
            for (int i = 0; i < n; i++) {
                if (count[s[i] - 'a'] == 1) {
                    return i;
            }
        }
        return -1;
    }
};