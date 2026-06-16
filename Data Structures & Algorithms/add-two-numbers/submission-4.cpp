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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* dummy=new ListNode(0);
        ListNode* lsum=dummy;   
        int ovh=0;
        while(l1!=NULL&&l2!=NULL){
            int val = l1->val+l2->val+ovh;
            if(val>=10) ovh=1;
            else ovh=0;
            val%=10;
            lsum->next=new ListNode(val);
            lsum=lsum->next;
            l1 = l1->next;
            l2=l2->next;
        }
        while(l1!=NULL){
            int val=l1->val+ovh;
            if(val>=10) ovh=1;
            else ovh=0;
            val%=10;
            lsum->next=new ListNode(val);
            lsum=lsum->next;
            l1=l1->next;
        }
        while(l2!=NULL){
            int val=l2->val+ovh;
            if(val>=10) ovh=1;
            else ovh=0;
            val%=10;
            lsum->next=new ListNode(val);
            lsum=lsum->next;
            l2=l2->next;
        }
        if(l1==NULL&&l2==NULL&&ovh!=0) lsum->next=new ListNode(1);
        return dummy->next; 
    }
};
