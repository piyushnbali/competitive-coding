// We have to delete all the occurrences of the element if it occurrs more than once in the list.
// LIKE 1-2-3-3-3-4 BECOMES 1-2-4
// Used 3 pointers i.e. t,f,s for simplicity; t stays back while f and s traverse ahead
// Can be done only using two pointers where s=f->next!

class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if(head==nullptr || head->next==nullptr) return head;
        ListNode *ans= new ListNode(69, nullptr);
  ListNode *t=ans,*f=head,*s=f->next;
  
  while(true){
    
    if(f->val==s->val){
      while (s->val==f->val){
        s=s->next;
        if(s==nullptr){
          break;
        }
      }
      if(s==nullptr || s->next==nullptr){
        t->next=s;
        break;
      }
      f=s;
      s=s->next;
    }
    else{
      t->next=f;
      t=t->next;
      f=t->next;
      s=f->next;
      if(s==nullptr){
        t->next=f;
        break;
      }
    }
  }
  return ans->next;
    }
};
