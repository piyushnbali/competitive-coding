/*
	APPROACH :
	1. FIND LENGTH BY MOVING A POINTER TO LAST ELEMENT (NOT NULL)
	2. FIND REMAINDER BY DIVIDING K BY THE LENGTH... THIS HELPS WHEN K>LENGTH.. AS THE PATTERN IS REPEATED ONCE K EXCEEDS LENGTH.
	3. IF REMAINDER == 0 RETURN ORIGINAL LIST
	4. MOVE TO THE LEN-REMAINDER-1 TH ELEMENT WITH THE HELP OF A POINTER I.E. TILL THE ELEMENT UP TO WHICH THERE WILL BE NO CHANGE IN THE LIST 
	5. MAKE ITS NEXT A HEAD (TO BE RETURNED)
	6. MAKE ITS NEXT NULL
	7. MAKE LAST'S NEXT POINT TO INITIAL HEAD
*/

/*
FOR K=2::

       head	      last
    	|		|
	1 - 2 - 3 - 4 - 5 - NULL
		|
	       ptr
*/
class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==nullptr || head->next==nullptr || k==0) return head;
        int len=1;
		ListNode *last= head,*ptr=head,*ans=nullptr;
		while(last->next!=nullptr){
			last=last->next;
			++len;
		}
		int no = k%len;
		if(no==0) return head;
		for(int i=0;i<len-no-1;++i){
			ptr=ptr->next;
		}
		ans=ptr->next;
		ptr->next=nullptr;
		last->next=head;
        return ans;
    }
};
