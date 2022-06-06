# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def maxDepth(self, root: Optional[TreeNode]) -> int:
        
        if root is None:
            return 0
        
        level=0
        que=deque([root])
        while que:
            
            for i in range(len(que)):
                node=que.popleft()
                
                if node.left:
                    que.append(node.left )
                if node.right :
                     que.append(node.right )
            
            level+=1
        return level   
            
            
            
        