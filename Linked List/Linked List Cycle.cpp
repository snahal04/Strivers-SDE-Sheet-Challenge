class Solution {
public:
    bool hasCycle(ListNode *head) {
        if(head==NULL || head->next == NULL){
            return false;
        }
        ListNode* slow = head,*fast=head;
        while(fast->next && fast->next->next){
            fast = fast->next->next;
            slow = slow->next;
            if(fast == slow) return 1;
        }
        return 0;
    }
};
