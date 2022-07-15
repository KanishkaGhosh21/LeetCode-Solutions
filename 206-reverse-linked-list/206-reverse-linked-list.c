/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* reverseList(struct ListNode* head){
    // if(!head)
    //     return head;
    // struct ListNode* revList=(struct ListNode*)malloc(sizeof(struct ListNode));
    // revList->val=head->val;
    // revList->next=NULL;
    // head=head->next;
    // while(head)
    // {
    //     struct ListNode* newNode=(struct ListNode*)malloc(sizeof(struct ListNode));
    //     newNode->val=head->val;
    //     newNode->next=revList;
    //     revList=newNode;
    //     head=head->next;
    // }
    // return revList;
    
    
    if(!head)
        return head;
    struct ListNode* ptr=head->next;
    head->next=NULL;
    while(ptr)
    {
        struct ListNode* next=ptr->next;
        ptr->next=head;
        head=ptr;
        ptr=next;
    }
    return head;
    
}