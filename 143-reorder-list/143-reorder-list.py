# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def reorderList(self, head: Optional[ListNode]) -> None:
        
        
     
       #finding the middle and last in list
        slow,fast=head,head.next
        
        while fast and fast.next:
            slow=slow.next
            fast=fast.next.next
            
        #making the 2nd half reverse
        second=slow.next
        slow.next=None
        prev=None
        
        while second:
            
            tmp =second.next
            second.next=prev
            prev=second
            second=tmp
            
         
        #merge 2 of them
        first=head
        second=prev
        
        while second:
            tmp1=first.next
            tmp2=second.next
            
            first.next=second
            second.next=tmp1
            
            first=tmp1
            second=tmp2
            
            
            
            
        
            