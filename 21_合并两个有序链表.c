/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2) {
    if(list1==NULL&&list2==NULL){
        return NULL;
    }
    struct ListNode* list=(struct ListNode*)malloc(sizeof(struct ListNode));
    
    struct ListNode* p=list1;
    struct ListNode* q=list2;
    struct ListNode* tail=list;
    while(p!=NULL&&q!=NULL){
        if(p->val<=q->val){
            struct ListNode* cur=(struct ListNode*)malloc(sizeof(struct ListNode));
            cur->val=p->val;
            tail->next=cur;
            tail=cur;
            p=p->next;
        }
        else{
            struct ListNode* cur=(struct ListNode*)malloc(sizeof(struct ListNode));
            cur->val=q->val;
            tail->next=cur;
            tail=cur;
            q=q->next;
        }
    }
    while(p!=NULL){
        tail->next=p;
        tail=p;
        p=p->next;
    }
    while(q!=NULL){
        tail->next=q;
        tail=q;
        q=q->next;
    }
    tail->next=NULL;
    return list->next;
}