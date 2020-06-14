/*
  RECURSION:: 
  TO THINK PROPERLY,
  THINK ONLY ABOUT SUBPART OF A TREE i.e a parent and its children
  1. L->R should be equal to R->L and vice versa. 
  2. AND THEN DECIDE THE EDGECASES
     - LIKE BOTH SHOULD END AT THE SAME TIME etc.
*/
  
class Solution {
public:
    bool recur(TreeNode *l,TreeNode *r){
        if(!l && !r) return 1; // ending case where both nodes are not valid
        if(!l && r || l && !r) return 0; // if only one node is valid return false
        return (l->val==r->val) && (recur(l->right,r->left)) && recur(l->left,r->right);
    }
    
    bool isSymmetric(TreeNode* root) {
        if(!root) return 1;
        if(!root->left && !root->right) return 1;
        return recur(root->left,root->right);
    }
};
