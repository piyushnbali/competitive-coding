//MORRIS TRAVERSAL REMAINING

//ITERATION- HARD TO IMPLEMENT
class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        if(!root) return {};
        TreeNode *curr=root;
        vector<int> v;
        stack<TreeNode*> s;
        while(curr || !s.empty()){
            while(curr){
                s.push(curr);
                curr=curr->left;
            }
            curr=s.top();
            s.pop();
            v.push_back(curr->val);
            curr=curr->right;
        }
        return v;
    }
};
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
