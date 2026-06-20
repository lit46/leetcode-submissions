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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if(left==right) return head;
        int pos=1;
        ListNode* lft=head;
        ListNode* dummy=new ListNode(0, head);
        ListNode* prev = dummy;
        while(pos!=left){
            lft = lft->next;
            prev=prev->next;
            pos++;
        }
        ListNode* rght=lft;
        while(pos!=right){
            rght = rght->next;
            pos++;
        }
        if(head==lft) head=rght;
        prev->next=rght;
        ListNode* nxt = lft->next;
        ListNode* tmp = lft->next->next;
        lft->next = rght->next;
        while(tmp!=rght->next){
            nxt->next=lft;
            lft=nxt;
            nxt=tmp;
            tmp=tmp->next;
        }
        rght->next=lft;
        return head;
    }
};