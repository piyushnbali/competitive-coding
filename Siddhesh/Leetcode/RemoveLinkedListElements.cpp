/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        if(!head) return head;
        ListNode *dummy=new ListNode();
        dummy->next=head;
        ListNode *f=dummy,*s=head,*tmp=nullptr;
        while(s){
            if(s->next==nullptr){ //FOR LAST ELEMENT
              s->val==val ? f->next=nullptr : f->next=s;
                f->next=nullptr;
                break;
            }
            if(s->val==val){
                s=s->next;
            }
            else{
                f->next=s;
                f=f->next;
                s=s->next;
            }
        }
        return dummy->next;
    }
};
