/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* reverseList(struct ListNode* head){
    if(head==NULL){
        return NULL;
    }
    struct ListNode* p=head;
    struct ListNode* r=head->next;
    head->next=NULL;
    while(r!=NULL){
        p=r;
        r=r->next;
        p->next=head;
        head=p;
    }
    return head;
}