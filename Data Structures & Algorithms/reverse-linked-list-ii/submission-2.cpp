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
        ListNode* dummy = new ListNode(0, head);
        ListNode* prev = dummy;
        while(pos!=left){
            prev=prev->next;
            pos++;
        }
        ListNode* curr = prev->next;
        ListNode* nxt = curr->next;
        while(pos!=right){
            nxt=curr->next;
            curr->next=nxt->next;
            nxt->next = prev->next;
            prev->next = nxt;
            pos++;             
        }
        return dummy->next;
    }
};