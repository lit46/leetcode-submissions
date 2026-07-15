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
    void reverseList(ListNode* head, ListNode* prev){
        if(!head) return;
        ListNode* nxt = head->next;
        head->next = prev;
        prev = head;
        head = nxt;
        reverseList(head, prev);
    }
    ListNode* findMid(ListNode* head){
        if(!head) return nullptr;
        if(!head->next) return head;
        ListNode* slow=head;
        ListNode* fast=head;
        while(fast&&fast->next){
            slow = slow->next;
            fast = fast->next;
            if(fast->next) fast=fast->next;
        }
        return slow;
    }
    void mergeList(ListNode* l1, ListNode* l2){
        if(!l1||!l2) return;
        ListNode* n1 = l1->next;
        ListNode* n2 = l2->next;
        l1->next=l2;
        if(n1)
            l2->next=n1;
        mergeList(n1, n2);
    }
    void reorderList(ListNode* head) {
        if(!head->next) return;
        ListNode* mid = findMid(head);
        ListNode* temp = head;
        while(temp->next!=mid){
            temp=temp->next;
        }
        temp->next =nullptr;
        ListNode* head2 = mid;
        while(head2->next){
            head2=head2->next;
        } 
        reverseList(mid, nullptr);
        mergeList(head, head2);
    }
};
