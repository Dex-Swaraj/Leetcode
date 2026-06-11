class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {
        if(root==nullptr)
          return nullptr;

        TreeNode* rig=invertTree(root->right);
        TreeNode* lef=invertTree(root->left);

        root->left = rig;
        root->right = lef;

        return root;
    }
};