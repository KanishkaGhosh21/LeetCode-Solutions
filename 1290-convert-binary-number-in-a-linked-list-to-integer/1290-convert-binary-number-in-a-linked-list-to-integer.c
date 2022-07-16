/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


int getDecimalValue(struct ListNode* head){
    if(!head->next)
        return head->val;
    int val=head->val;
    head=head->next;
    while(head)
    {
        val=val*2 + head->val;
        head=head->next;
    }
    return val;
}