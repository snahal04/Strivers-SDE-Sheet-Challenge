class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* prev=NULL,*curr=head,*next=NULL;
        while(curr!=NULL){
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        head = prev;
        return head;
    }
};
