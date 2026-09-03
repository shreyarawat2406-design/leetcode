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
    int maxlevel=0;
    vector<int>result;

    void helper(TreeNode * current,int level){
        if(current==NULL){
            return ;
        }
        if(maxlevel<level){
            maxlevel=level;
            result.push_back(current->val);
        }
        helper(current->right, level+1);
        helper(current->left,level+1);
    }
    vector<int> rightSideView(TreeNode* root) {
     
        helper(root,1);
        return result;

        
    }
};