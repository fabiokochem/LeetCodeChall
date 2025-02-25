"""
    I lost the count of how many times i tried to solve this and by far i need to study more about trees. In my solution I tried to recover the tree and then check if the target is in the recovered values. I think that the solution is correct but I need to study more about trees to understand why it is not working. 
            
            The step-by-step is:
            1. Create a class FindElements that receives a root
            2. Create a set to store the recovered values
            3. Create a method to recover the tree
                1. If the node exists
                    1. Set the node value as val
                    2. Add the value to the recovered values set
                    3. Call the method recursively for the left node
                    4. Call the method recursively for the right node
            4. Create a method to find the target
                1. Return if the target is in the recovered values set 
                
            The time complexity is O(n) and I know is trash because i saw some solutions after. Some guys in this world are just coding gods. 
"""
# Definition for a binary tree node.
class TreeNode(object):
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right

class FindElements(object):

    def __init__(self, root):
        """
        :type root: Optional[TreeNode]
        """
        self.root = root
        self.recovered_values = set()
        self.recover_tree(root, 0)

    def recover_tree(self, node, val):
        if node:
            node.val = val
            self.recovered_values.add(val)
            self.recover_tree(node.left, 2 * val + 1)
            self.recover_tree(node.right, 2 * val + 2)

    def find(self, target):
        """
        :type target: int
        :rtype: bool
        """
        return target in self.recovered_values

# Your FindElements object will be instantiated and called as such:
# obj = FindElements(root)
# param_1 = obj.find(target)