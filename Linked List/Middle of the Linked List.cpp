class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode* temp = head;
        int count = 0;
        while(temp->next!=NULL){
            count++;
            temp=temp->next;
        }
        temp = head;
        if(count%2==0)count = count/2;
        else count = (count/2)+1;
        while(temp->next!=NULL&&count!=0){
            temp = temp->next;
            count--;
        }
        return temp;
    }
};
