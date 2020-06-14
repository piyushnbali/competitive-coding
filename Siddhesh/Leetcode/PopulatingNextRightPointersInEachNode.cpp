/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/

class Solution {
public:
    Node* connect(Node* root) {
        if(!root) return root;
        Node *top,*nxt;
        queue<Node*> q;
        q.push(root);
        while(!q.empty()){
            int size=q.size();
            for(int i=0;i<size;++i){
                top=q.front();
                q.pop();
                nxt=q.front();
                top->next=nxt;
                if(top->left){
                    q.push(top->left);
                    q.push(top->right);
                }
            }
            top->next=NULL;
        }
        return root;
    }
};
