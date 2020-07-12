// FLOYD'S ALGORITHM
// LINK:: https://youtu.be/9YTjXqqJEFE
/*
  APPROACH::
  FIRST FIND OUT IF THERE IS A CYCLE ... REFER TO LINKED LIST CYCLE SOLUTION
  IF THERE IS A CYCLE ::
    MOVE FIRST PTR TO START AND KEEP SCND PTR WHERE IT IS
    NOW KEEP MOVING FORWARD EACH PTR... 
    THE POINT WHERE THEY MEET WILL BE THE POINT WHERE THE CYCLE STARTS.. WHICH IS ASKED IN THE SOLUTION
 */
 
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        if(head==nullptr) return head;
        ListNode *f=head,*s=head;
        bool found=0,first=1;
        while(true){
            if(s->next==nullptr || s->next->next==nullptr){
                break;
            }
            if(s==f && !first){
                found=1;
                break;
            }
            first=0;
            f=f->next;
            s=s->next->next;
        }
        if(found){
            f=head;
            while(f!=s){
                f=f->next;
                s=s->next;
            }
            return f;
        }
        return nullptr;
    }
};
