// week14-3.cpp 學習計畫 Binary Tree 第1題
// Leetcode 104. Maximum Depth of Binary Tree
class Solution {
public:
    int maxDepth(TreeNode* root) {
        if(root== nullptr) return 0;
        int ans1 = maxDepth(root -> left);
        int ans2 = maxDepth(root -> right);
        return max(ans1,ans2) + 1;
    }
};