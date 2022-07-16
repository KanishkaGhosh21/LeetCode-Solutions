/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }
 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */
class Solution {
    public ListNode mergeNodes(ListNode head) {
        head=head.next;
        ListNode prev=head;
        ListNode ptr=head;
        int sum=0;
        while(ptr!=null)
        {
            if(ptr.val!=0)
                sum+=ptr.val;
            else if(ptr.val==0 && ptr.next==null)
            {
                prev.val=sum;
                prev.next=null;
            }
            else
            {
                prev.val=sum;
                prev=prev.next;
                sum=0;
            }
            ptr=ptr.next;
        }
        return head;
    }
}