//MORRIS TRAVERSAL REMAINING

//RECURSION
class Solution {
public:
    void recur(vector<int>& v,TreeNode *root){
        if(root->left){
            recur(v,root->left);
        }
        v.push_back(root->val);
        if(root->right){
            recur(v,root->right);
        }
        return;
    }
    
    vector<int> inorderTraversal(TreeNode* root) {
        if(!root) return {};
        vector<int> v;
        recur(v,root);
        return v;
    }
};
