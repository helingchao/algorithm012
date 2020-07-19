class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        stack<TreeNode*> sta;
        vector<int> ans;

        TreeNode* cur = root;

        while(cur != NULL || !sta.empty()) {
            while(cur != NULL) {
                sta.push(cur);
                cur = cur->left;
            }

            TreeNode* tmp = sta.top();
            sta.pop();
            ans.push_back(tmp->val);
            cur = tmp->right;
        }

        return ans;
    }
