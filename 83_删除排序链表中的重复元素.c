/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* deleteDuplicates(struct ListNode* head) {
    struct ListNode* p=head;
    if(head==NULL||head->next==NULL){
        return head;
    }
    while(p!=NULL&&(p->next)!=NULL){
        if(p->val==p->next->val){
            struct ListNode* r=p->next;
            p->next=r->next;
            free(r);
        }
        if(p->next!=NULL&&p->val!=p->next->val){
            p=p->next;
        }
    }
    return head;
}