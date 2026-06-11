class Solution {
public:
    int maxDepth(TreeNode* root) {
        return recur(root,0);
    }


    int recur(TreeNode* root,int count)
    {
         TreeNode* curr=root;
         if(curr==nullptr)
            return 0;
         int left=recur(curr->right,count+1);
         int right=recur(curr->left,count+1);
         return 1+max(left,right);

    }
     
};