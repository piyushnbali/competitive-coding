//Iterative approach remaining

class Solution {
public:
    void recur(vector<int>& v,TreeNode* root){
        if(root->left){
            recur(v,root->left);
        }
        if(root->right){
            recur(v,root->right);
        }
        v.push_back(root->val);
        return;
    }
    
    vector<int> postorderTraversal(TreeNode* root) {
        if(!root) return {};
        vector<int> v;
        recur(v,root);
        return v;
    }
};
