//BFS Using Queue

class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        if(!root) return {};
        vector<vector<int>> v;
        queue<TreeNode*> q;
        q.push(root);
        v.push_back({root->val});
        while(!q.empty()){
            vector<int> vi;
            int size=q.size();
            for(int i=0;i<size;++i){
                TreeNode* node=q.front();
                q.pop();
                if(node->left){
                    q.push(node->left);
                    vi.push_back(node->left->val);
                }
                if(node->right){
                    q.push(node->right);
                    vi.push_back(node->right->val);
                }
            }
            if(vi.size()){
                v.push_back(vi);
            }
        }
        return v;
    }
};
