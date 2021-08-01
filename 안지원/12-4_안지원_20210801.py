# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def middleNode(self, head: ListNode) -> ListNode:
        pre, after = head, head
        while pre and pre.next:
            pre = pre.next.next
            after = after.next;
        return after
        