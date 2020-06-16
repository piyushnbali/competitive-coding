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

// Iterative solution using stack
class Solution {
public:
    vector<int> preorderTraversal(TreeNode* root) {
        if(!root) return {};
        vector<int> v;
        v.push_back(root->val);
        stack<TreeNode*> s;
        s.push(root);
        while (!s.empty()){
            TreeNode *main=s.top();
            if(main->left){
                s.push(main->left);
                v.push_back(main->left->val);
                main->left=nullptr;
            }
            else if(main->right){
                s.push(main->right);
                v.push_back(main->right->val);
                main->right=nullptr;
            }
            else{
                s.pop();
            }
        }
        return v;
    }
};


//RECURSION
class Solution {
public:
    void recur(vector<int>& v,TreeNode *root){
        if(root->left){
            v.push_back(root->left->val);
            recur(v,root->left);
        }
        if(root->right){
            v.push_back(root->right->val);
            recur(v,root->right);
        }
        return;
    }
    
    vector<int> preorderTraversal(TreeNode* root) {
        if(!root) return {};
        vector<int> v;
        v.push_back(root->val);
        recur(v,root);
        return v;
    }
};
