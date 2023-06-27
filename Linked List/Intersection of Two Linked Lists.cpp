class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode *n1 = headA;
        ListNode *n2 = headB;
        while(n1!=NULL&&n2!=NULL&&n1!=n2){
            n1 = n1->next;
            n2=n2->next;
            if(n1==n2)return n1;

            if(n1==NULL)n1=headB;
            if(n2==NULL)n2=headA;
        }
        return n1;
    }
};
