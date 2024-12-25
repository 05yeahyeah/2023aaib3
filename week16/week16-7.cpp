// week16-7.cpp Leetcode 每日挑戰題
// 找到樹的每一層最大值
class Solution {
public:
    void helper(TreeNode* root,int level,vector<int>& ans){
        if(root==nullptr) return;
        if(ans.size() <= level) ans.push_back(root->val);
        else if(root->val > ans[level]) ans[level] = root->val;
        
        helper(root->left,level+1,ans);
        helper(root->right,level+1,ans);
    }
    vector<int> largestValues(TreeNode*root){
        vector<int> ans;
        helper(root,0,ans);
        return ans;
    }
};