/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* removeElements(struct ListNode* head, int val){
    if(!head)
        return head;
    struct ListNode *prev=NULL;
    struct ListNode *ptr=head;

    while(ptr)
    {
        if(ptr->val==val && !prev)
        {
            head=head->next;
            ptr=head;
        }
        else if(ptr->val==val && prev)
        {
            prev->next=ptr->next;
            ptr=prev->next;
        }
        else
        {
            prev=ptr;
            ptr=ptr->next;
        }
    }
    return head;
}