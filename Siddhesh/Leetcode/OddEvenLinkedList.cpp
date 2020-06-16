/*
  I/P 1-2-3-4-5-6-7-NULL
  O/P 1-3-5-7-2-4-6-NULL
  
  APPROACH :: Two Pointers ... One pointing at even and other pointing at odd position.
*/

class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
        if(!head || !head->next) return head;
        ListNode *odd=head,*even=head->next,*even_head=head->next,*odd_tail=head;
        while(odd->next || even->next){
            if(!odd->next || !odd->next->next){
                odd->next=nullptr;
                odd_tail=odd;
            }
            else{
                odd->next=odd->next->next;   
                odd=odd->next;
                odd_tail=odd;
            }
            if(!even->next || !even->next->next){
                even->next=nullptr;
            }
            else{
                even->next=even->next->next;
                even=even->next;
            }
        }
        odd_tail->next=even_head;
        return head;
    }
};
