/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    unordered_map<int, int> pos;
    TreeNode* reConstructBinaryTree(vector<int> pre,vector<int> vin) {
        int n = pre.size();
        for(int i = 0; i < n; i++){
            pos[vin[i]] = i;
        }
        
        return dfs(pre, vin, 0, n-1, 0, n-1);
    }
    
    TreeNode* dfs(vector<int> pre,vector<int> vin, int pl, int pr, int vl, int vr){
        if(pl > pr) return NULL;
        TreeNode* root = new TreeNode(pre[pl]);
        
        int k = pos[pre[pl]] - vl;
        
        root -> left = dfs(pre, vin, pl + 1, pl + k, vl, vl + k - 1);
        root -> right = dfs(pre, vin, pl + k + 1, pr, vl + k + 1, vr);
        
        return root;
    }
};