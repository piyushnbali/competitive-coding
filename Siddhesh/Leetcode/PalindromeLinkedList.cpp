/*
APPROACH::
  1. USE TWO POINTERS .. ONE SLOW AND OTHER FAST
  2. (Important) PROPERLY ASSIGN VALUES H1 AND H2 FOR ODD AND EVEN CASES
     * H1 is the last node of first half
     * H2 is the head node in the second half
     * e.g. 1. -> 1-2-3-Null => H1 at 1 H2 at 3
            2. -> 1-2-3-4-5-6-Null => H1 at 3 and H2 at 4
  3. REVERSE THE FIRST HALF AND COMPARE IT WITH THE SECOND HALF.
*/

class Solution {
public:
    void reverse(ListNode* head, ListNode* last){
        if(!head || head->next==last) return;
        ListNode *curr=head,*prev=nullptr;
        while (curr->next!=last){
            ListNode *nxt=curr->next;
            curr->next=prev;
            prev=curr;
            curr=nxt;
        }
        curr->next=prev;
    }
    
    bool isPalindrome(ListNode* head) {
        if(!head || !head->next) return 1;
        ListNode *f=head,*s=head;
        ListNode *h1,*h2;
        while (true){
            //Important logic
            if(s->next->next==nullptr){
                h1=f;
                h2=h1->next;
                break;
            }
            s=s->next->next;
            if(s->next==nullptr) {
                h1=f;
                h2=h1->next->next;
                break;
            }
            f=f->next;
        }
        //reverse head->...->h1 to h1->...->head
        reverse(head,h1->next);
        while (h1 && h2){
           if(h1->val!=h2->val) return 0;
           h1=h1->next;
           h2=h2->next;
        }
        return 1;
    }
};
