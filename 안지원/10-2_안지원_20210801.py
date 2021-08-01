# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def increasingBST(self, root: TreeNode) -> TreeNode:
        s = []
        def inOrder(node):
            if not node:
                return []
            inOrder(node.left)
            s.append(node.val)
            inOrder(node.right)
        
        inOrder(root)
        Root = TreeNode(s[0])
        temp = Root
        for i in range(1, len(s)):
            temp.right = TreeNode(s[i])
            temp = temp.right
        return Root