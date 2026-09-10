/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int result;

    pair<int,int> solve(TreeNode* root) {
        if(!root){
            return {0, 0};
        }
        auto p1 = solve(root ->left);
        auto p2 = solve(root -> right);

        int TotalSum = p1.first + p2.first + root->val;
        int TotalCount = p1.second + p2.second + 1;

        int avg = TotalSum / TotalCount;

        if(avg == root->val){
            result += 1;
        }
        return {TotalSum,TotalCount};
    }
    int averageOfSubtree(TreeNode* root) {
        result = 0;
        solve(root);
        return result;
    }
};