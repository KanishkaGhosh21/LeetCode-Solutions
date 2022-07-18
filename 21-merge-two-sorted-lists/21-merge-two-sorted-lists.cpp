/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode *head=NULL;
        if(list1 && list2)
        {
            if(list1->val>list2->val)
                head=new ListNode(list2->val,mergeTwoLists(list1,list2->next));
            else
                head=new ListNode(list1->val,mergeTwoLists(list1->next,list2));
        }
        else if(list1 && !list2)
            head=new ListNode(list1->val,mergeTwoLists(list1->next,list2));
        else if(!list1 && list2)
            head=new ListNode(list2->val,mergeTwoLists(list1,list2->next));
        return head;
    }
};