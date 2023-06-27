class Solution {
public:
    bool isPalindrome(ListNode* head) {
        ListNode* temp = head;
        ListNode* prev = NULL;
        ListNode* curr = temp;
        ListNode* next = temp->next;
        ListNode* slow = temp;
        ListNode* fast = temp;

        if(temp->next==NULL)return 1;
        if(temp->next->next == NULL){
            if(temp->val != temp->next->val)return 0;
            else return 1;
        }
        temp = head;
        int count = 0;

        while(fast->next!=NULL && fast->next->next!=NULL){
            count++;
            slow = slow->next;
            fast = fast->next->next;
        }
        cout<<slow->val<<endl;

        curr = slow->next;
        next = curr->next;

        while(next!=NULL){
            curr->next = prev;
            prev = curr;
            curr = next;
            next = next->next;
        }
        curr->next = prev;
        temp = curr;
        // cout<<head->next->val<<" "<<temp->next->val<<endl;
        if(count%2!=0)slow->next = NULL;

        while(head->next != NULL && temp->next!=NULL){
            if(head->val != temp->val)return 0;
            head = head->next;
            temp = temp->next;
        }
        if(head->val != temp->val)return 0;
        
        return 1;
    }

};
