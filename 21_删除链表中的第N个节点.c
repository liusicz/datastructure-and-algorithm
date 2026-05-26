/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* removeNthFromEnd(struct ListNode* head, int n){
    if(head==NULL){
        printf("链表长度不足\n");
        return NULL;
    }
    struct ListNode* p=head;
    struct ListNode* r=head->next;
    int i=0;
    struct ListNode* cru=head;
    while(cru!=NULL){
        i++;
        cru=cru->next;
    }
    if(i-n==0){
        head=head->next;
        free(p);
    }
    else if(i-n==1){
        p->next=r->next;
        free(r);
    }
    else{
        for(int j=0;j<i-n-1;j++){
            p=r;
            r=r->next;
        }
        p->next=r->next;
        free(r);
    }
    return head;
}