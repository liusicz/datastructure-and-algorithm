/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
    struct ListNode* p=(struct ListNode*)malloc(sizeof(struct ListNode));
    p->next=NULL;
    struct ListNode *q=p;
    int digit,carry=0;
    while(l1!=NULL||l2!=NULL||carry!=0){
        int sum=carry;
        if(l1!=NULL){
            sum+=l1->val;
            l1=l1->next;
        }
        if(l2!=NULL){
            sum+=l2->val;
            l2=l2->next;
        }
        digit=sum%10;
        carry=sum/10;
        struct ListNode* current=(struct ListNode*)malloc(sizeof(struct ListNode));
        current->val=digit;
        current->next=q->next;
        q->next=current;
        q=current;
    }
    q->next=NULL;
    return p->next;
}