# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution:
    # @param head, a ListNode
    # @param val, an integer
    # @return a ListNode
    def removeElements(self, head, val):
        dummyHead = ListNode(0)
        dummyHead.next = head
        current = dummyHead
        while current.next:
            if current.next.val != val:
                current = current.next
            else:
                current.next = current.next.next
        return dummyHead.next
