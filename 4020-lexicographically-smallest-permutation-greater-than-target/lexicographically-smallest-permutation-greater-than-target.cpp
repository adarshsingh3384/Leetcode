class Solution {
public:
    string lexGreaterPermutation(string s, string target) {
        sort(s.begin(), s.end());
        string ans = "";

        for (int i = target.size() - 1; i >= 0; i--) {
            string prefix = target.substr(0, i);
            string temp = s;
            bool possible = true;

            for (char c : prefix) {
                auto it = find(temp.begin(), temp.end(), c);

                if (it == temp.end()) {
                    possible = false;
                    break;
                }

                temp.erase(it);
            }

            if (!possible)
                continue;
            char best = '{';

            for (char c : temp) {
                if (c > target[i]) {
                    best = min(best, c);
                }
            }
            if (best != '{') {
                ans = prefix + best;
                temp.erase(find(temp.begin(), temp.end(), best));
                sort(temp.begin(), temp.end());
                ans += temp;
                return ans;
            }
        }
        return "";
    }
};