//AWESOME PROBLEM... VERY SIMPLE SOLUTION
/*
    1-2-3-4-5-6-7-8-9-NULL
            |
          1-3
    EXPECTED ANSWER IS NODE "5";
    
    APPROACH::
        1. HAVE TWO POINTERS POINTING AT THE RESPECTIVE HEADS OF THE TWO LINKED LISTS
        2. MOVE BOTH OF THEM ONE STEP AT A TIME
        3. IF ANY OF THE POINTER REACHES THE END OF THE LIST I.E. NULL... MAKE IT POINT TO THE HEAD OF THE OTHER LIST!
*/

class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode *a=headA,*b=headB;
        while(a!=b){
            if(a!=nullptr){
                a=a->next;
            }
            else{
                a=headB;
            }
            if(b!=nullptr){
                b=b->next;
            }
            else{
                b=headA;
            }
        }
        return a;
    }
};
