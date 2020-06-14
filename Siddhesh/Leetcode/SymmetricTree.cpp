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


//USING QUEUE:: 
class Solution {
public:
    bool isSymmetric(TreeNode* root) {
        if(!root) return 1;
        if(!root->left && !root->right) return 1;
        if(!root->left && root->right || root->left && !root->right) return 0;
        queue<TreeNode*> ql,qr;
        if(root->left->val==root->right->val){
            ql.push(root->left);
            qr.push(root->right);   
        }
        else{
            return 0;
        }
        while(!ql.empty() || !qr.empty()){
            TreeNode *l=ql.front(),*r=qr.front();
            ql.pop();
            qr.pop();
            if(l->left && r->right){
                if(l->left->val==r->right->val){
                    ql.push(l->left);
                    qr.push(r->right);
                }   
                else{
                    return 0;
                }
            }
            else if(!r->right && l->left || r->right && !l->left){
                return 0;
            }
            if(l->right && r->left){
                if(l->right->val==r->left->val){
                    ql.push(l->right);
                    qr.push(r->left);
                }   
                else{
                    return 0;
                }
            }
            else if(!r->left && l->right || r->left && !l->right){
                return 0;
            }
        }
        return 1;
    }
};
