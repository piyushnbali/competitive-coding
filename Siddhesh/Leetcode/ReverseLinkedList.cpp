class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if(head==nullptr || head->next==nullptr) return head;
        ListNode *first=head,*second=head->next,*tmp=nullptr;
  
  while(head->next!=nullptr){
    head=head->next;
  }
  //head as last i.e. 5
  //consider last as head

  tmp=head->next;
  while(first!=nullptr){
    first->next=tmp;
    tmp=first;
    first=second;
    if(second!=nullptr){
      second=second->next;
    }
  }
        return head;
    }
};
