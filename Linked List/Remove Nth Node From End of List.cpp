class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {

        if(head == NULL || head->next == NULL) return NULL;

        ListNode* temp = head;
        int count = 0;
        while(temp != NULL && temp->next != NULL){
            temp = temp->next;
            count++;
        }
        // Count = Length of node from 0,1,2,3...
        cout<<count<<endl;

        temp = head;
        int pos = count - n;
        // pos = Position to delete - 1  from starting

        if(pos < 0) return head->next;
        // Test case [1,2] n = 2;
        // count = 1, pos = -1, so we return the head->next;
        
        count = 0;
        while(temp != NULL && temp->next != NULL){         
            if(count == pos){
                temp->next = temp->next->next;
            }
            // Node link is pointed to the next to next node
            temp = temp->next;
            count++;         
        }
        return head;
    }
};
