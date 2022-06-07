# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def diameterOfBinaryTree(self, root: Optional[TreeNode]) -> int:
        
        maxm=[0]
        
        def diameter(root):
            
            if root is None:
                return -1
            left=diameter(root.left)
            right=diameter(root.right)
            maxm[0]=max(maxm[0],2+left+right)
            
            return 1+max(right,left)   
        diameter(root)
        return maxm[0] 