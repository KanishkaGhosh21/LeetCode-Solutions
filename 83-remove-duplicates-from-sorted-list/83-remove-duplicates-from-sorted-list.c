/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* deleteDuplicates(struct ListNode* head){
    if(!head || !head->next)
        return head;
    struct ListNode *prev=head;
    struct ListNode *curr=head->next;
    while(curr)
    {
        if(prev->val==curr->val)
        {
            prev->next=curr->next;
            curr=curr->next;
        }
        else
        {
            prev=curr;
            curr=curr->next;
        }
    }
    return head;
}