/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        if(!head) return head;
        unordered_map<Node*, Node*> nodes;
        Node* newhead = new Node(head->val);
        Node* temp=head->next;
        Node* newtemp=newhead;
        nodes[head]=newhead;
        while(temp){
            Node* nxt = new Node(temp->val);
            newtemp->next = nxt;
            newtemp = nxt;
            nodes[temp]=newtemp;
            temp = temp->next;
        }
        Node* tmp = head;
        Node* curr = newhead;
        while(tmp){
            curr->random = nodes[tmp->random];
            curr=curr->next;
            tmp=tmp->next;
        }
        return newhead;
    }
};
