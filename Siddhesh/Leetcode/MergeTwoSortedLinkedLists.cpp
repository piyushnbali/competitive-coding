// APPROACH: Similar to basic approach of Adding two sorted arrays 
//  But instead of traversing from back we have to traverse from the beginning of both lists.

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        if(l1==nullptr) return l2;
        if(l2==nullptr) return l1;
        ListNode *ans=nullptr,*temp,*ptr;
        while(l1!=nullptr && l2!=nullptr){
            if(l1->val>l2->val){
                temp = new ListNode(l2->val);
                l2=l2->next;
            }
            else{
                temp = new ListNode(l1->val);
                l1=l1->next;
            }
            if(ans==nullptr){
                ans = temp;
                ptr = ans;
            }
            else{
                ans->next=temp;
                ans=ans->next;
            }
        }
        if(l1!=nullptr){
            while(l1!=nullptr){
                ans->next= new ListNode(l1->val);
                ans=ans->next;
                l1=l1->next;
            }
        }
        else if(l2!=nullptr){
            while(l2!=nullptr){
                ans->next=new ListNode(l2->val);
                ans=ans->next;
                l2=l2->next;
            }
        }
        return ptr;
    }
};
