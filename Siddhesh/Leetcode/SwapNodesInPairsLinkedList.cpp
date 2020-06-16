/*
i/p 1-2-3-4-5-nullptr => o/p 2-1-4-3-5
YOU CAN'T JUST SWAP THE VALUES... YOU HAVE TO SWAP ADJACENT NODES

IDEA::
    1. Iterate using two ptrs.
    *. Temporary node->next=second (not in first iteration... Check 4th step)
    2. First->next = second->next
    3. Second->next = first
    4. Save the first node in a temporary pointer
*/

class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        if(head==nullptr) return head;
        if(head->next==nullptr) return head;
        ListNode *first=head,*second=head->next,*tmp=nullptr;
  
  while (first!=nullptr && second!=nullptr){
    if(tmp==nullptr){
      first->next=second->next;
      second->next=first;
      head=second;
      tmp=first;
    }
    else{
      tmp->next=second;
      first->next=second->next;
      second->next=first;
      tmp=first;
    }
    first=first->next;
    if(first!=nullptr){
      second=first->next;
    }
  }
        return head;
    }
};
