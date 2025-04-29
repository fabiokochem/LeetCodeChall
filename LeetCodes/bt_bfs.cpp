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
#include <vector>
#include <queue>

class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        queue<TreeNode*> q;
        vector<vector<int>> res;

        if(root == nullptr) return {};

        int curr_lvl = 0;
        q.push(root);

        while(!q.empty()){
            int len = q.size();
            res.push_back({});

            for(int i = 0; i < len; i++){
                TreeNode* node = q.front();
                q.pop();

                res[curr_lvl].push_back(node->val);

                if(node->left != nullptr) q.push(node->left);
                if(node->right != nullptr) q.push(node->right);
            }
            curr_lvl++;
        }

        return res;
    }
};
