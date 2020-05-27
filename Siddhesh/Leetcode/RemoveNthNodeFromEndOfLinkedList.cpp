 /*
  Approach : traverse list using two pointers.
      1. initialize two ptrs to a dummy node which points at the head of list.
      2. separate two pointers by a distance of n (n is the index(1-based) of the element which is to be deleted (counting backwards))
      3. traverse the list by maintaining the distance and incrementing both ptrs till the leading ptr reaches nullptr (i.e. end)
      4. set trailing ptr's next to its next's next.
 */
 
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode *first,*second;
        ListNode *dummy= new ListNode(69,head);
        first=dummy;
        second=dummy;
        
        for(int i=0;i<=n;++i){
            second=second->next;
        }
        
        while(second!=nullptr){
            first=first->next;
            second=second->next;
        }
        first->next=first->next->next;
        return dummy->next;
    }
};
