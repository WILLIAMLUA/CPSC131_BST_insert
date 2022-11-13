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
        if (!root) {
            TreeNode *newNode = new TreeNode(val);
            return newNode;
		}
        // if val < current val insert it into left sub-tree
        if(val < root->val) root->left = insertIntoBST(root->left, val);
        // else val > current val insert it into right sub-tree
        else root->right = insertIntoBST(root->right, val);   
        return root;
    }
};

/**
* If root==NULL then create a new node with value equal to val & return the node.
* If val is less than root->val, then recursively call the function on the left subtree of the root & insert the node at a leaf node.
* If val is greater than root->val, then recursively call the function on the right subtree & insert the node at the leaf node.
* Finally return the root.
*/
