class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        int n = tickets.size();
        int time = 0;
        int x = tickets[k];
        for (int i = 0; i < n; i++) {
            if (i <= k) {
                time += min(tickets[i], x);
            } else {
                time += min(tickets[i], x - 1);
            }
        }
        return time;
    }
};