class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        if(head==NULL || head->next == NULL)return NULL;
        ListNode* fast=head,*slow=head;
        bool flag = 0;
        while(fast->next&&fast->next->next){
            fast=fast->next->next;
            slow=slow->next;
            if(fast==slow){
                flag = 1;
                break;
            }
        }
        if(!flag)return NULL;
        while(head!=slow){
            slow = slow->next;
            head = head->next;
        }
        return head;

    }
};
