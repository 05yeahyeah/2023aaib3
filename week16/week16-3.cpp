// week16-3.cpp 學習計畫 Binary Tree 隱藏的第三題
// Leetcode 94. Binary Tree Inorder Traversal
class Solution {
public:
    void helper(TreeNode*root,vector<int>& ans){
        if(root==nullptr) return;
        helper(root->left,ans); // 左半邊
        ans.push_back(root->val); // 塞中間
        helper(root->right,ans); // 右半邊
    }
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> ans; // 準備 ans 的答案
        helper(root,ans); // 函式呼叫函式
        return ans;
    }
};