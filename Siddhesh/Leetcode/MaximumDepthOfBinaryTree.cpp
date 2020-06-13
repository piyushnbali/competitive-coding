class Solution {
public:
    int recur(TreeNode* root,int count){
        if(!root) return count;
        int left=recur(root->left,count+1);
        int right=recur(root->right,count+1);
        return max(left,right);
    }
    
    int maxDepth(TreeNode* root) {
        if(!root) return 0;
        //passesd 0 instead of 1 (i.e. initial depth) because the recur returns when the root is null
        //which is why count is always 1 greater than the actual depth
        return recur(root,0);
    }
};
