class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode *tmp;
        tmp=head;
        while (tmp!=nullptr && tmp->next!=nullptr){
            if(tmp->val==tmp->next->val){
                tmp->next=tmp->next->next;
            }
            else{
                tmp=tmp->next;
            }
        }
        return head;
    }
};
