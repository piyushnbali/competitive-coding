/*
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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        if(l1==nullptr) return l2;
        if(l2==nullptr) return l1;
        ListNode *ans=nullptr;
        ListNode *head=nullptr;
        int sum;
        bool carry=0;
        while (l1!=nullptr || l2!=nullptr){
            sum=0;
            if(l1==nullptr){
                sum+=l2->val+carry;
            }
            else if (l2==nullptr){
                sum+=l1->val+carry;
            }
            else{
               sum+=l1->val+l2->val+carry; 
            }
            carry=sum/10;
            sum=sum%10;
            if(ans==nullptr){
                ans = new ListNode(sum);
                head= ans;
            }
            else{
                head->next= new ListNode(sum);
                head=head->next;
            }
            if(l1!=nullptr){
                l1=l1->next;
            }
            if(l2!=nullptr){
                l2=l2->next;
            }
        }
        if(carry){
            head->next = new ListNode(carry);
            head=head->next;
        }
        return ans;
    }
};
