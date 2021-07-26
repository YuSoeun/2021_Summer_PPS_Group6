# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def reverseList(self, head: ListNode) -> ListNode:
        def newList(Node, pre: ListNode = None):
            if not Node:
                return pre
            Node.next, next = pre, Node.next
            return newList(next, Node)
        return newList(head)
            