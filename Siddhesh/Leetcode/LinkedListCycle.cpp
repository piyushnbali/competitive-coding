/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

//Two pointers f & s one is slow other is fast
class Solution {
public:
    bool hasCycle(ListNode *head) {
        if(head==nullptr || head->next==nullptr) return 0;
        if(head->next==head) return 1;
        ListNode *f=head,*s=head->next;
        while (f!=s){
            if(f->next==nullptr || s->next==nullptr || s->next->next==nullptr) return 0;
            f=f->next;
            s=s->next->next;
        }
        return 1;
    }
};

// With head as f and s
class Solution {
public:
    bool hasCycle(ListNode *head) {
        if(head==nullptr) return 0;
        ListNode *f=head,*s=head;
        bool first=1;
        while(true){
            if(s->next==nullptr || s->next->next==nullptr) return 0;
            if(f==s && !first){
                return 1;
            }
            first=0;
            f=f->next;
            s=s->next->next;
        }
        return 0;
    }
};
