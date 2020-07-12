//BINARY TREE:: RECURSION
class Solution {
public:
    void recur(TreeNode* root,int sum,int curr,bool& found){
        if(!root) return;
        if(found) return;
        curr+=root->val;
        if(!root->left && !root->right && curr==sum){
             found=1;
             return;
        }
        recur(root->left,sum,curr,found);
        recur(root->right,sum,curr,found);
        return;
    }
    
    bool hasPathSum(TreeNode* root, int sum) {
        bool found=0;
        recur(root,sum,0,found);
        if(found) return 1;
        return 0;
    }
};
