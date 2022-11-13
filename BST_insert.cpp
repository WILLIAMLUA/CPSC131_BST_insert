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
    TreeNode* insertIntoBST(TreeNode* root, int val) {
    //New node will be made in the tree if tree is empty
        if(root==NULL){
            return new TreeNode(val);
        }
        else{
            // if val > current val insert it into left sub-tree
            if(root->val>val) 
                root->left=insertIntoBST(root->left,val);
            else
                // else val < current val insert it into right sub-tree
                root->right=insertIntoBST(root->right,val);
        }
        return root;
    }
};
