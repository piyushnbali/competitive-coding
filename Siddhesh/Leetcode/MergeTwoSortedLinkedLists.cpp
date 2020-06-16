/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        if(l1==nullptr) return l2;
        if(l2==nullptr) return l1;
        ListNode *ans=nullptr,*temp,*ptr;
        while(l1!=nullptr && l2!=nullptr){
            if(l1->val>l2->val){
                temp = l2;
                l2=l2->next;
            }
            else{
                temp = l1;
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
                ans->next= l1;
                ans=ans->next;
                l1=l1->next;
            }
        }
        else if(l2!=nullptr){
            while(l2!=nullptr){
                ans->next=l2;
                ans=ans->next;
                l2=l2->next;
            }
        }
        return ptr;
    }
};
