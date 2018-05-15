import queue
class TreeNode(object):
    def __init__(self,x):
        self.val = x
        self.left = None
        self.right = None

class Solution(object):
    def invert_tree(self,root):
        if root is None:
            return root
        else:
            q = queue.Queue()
            q.put(root)
            while not q.empty():
                size = q.qsize()
                for i in range(0,size):
                    tmp=q.get()
                    if tmp.left is not None:
                        q.put(tmp.left)
                    if tmp.right  is not None:
                        q.put(tmp.right)
                    tmp.left,tmp.right = tmp.right,tmp.left
        return root

def main():
    root = TreeNode(4)
    root.left = TreeNode(2)
    root.right = TreeNode(7)
    root.left.left = TreeNode(1)
    root.left.right = TreeNode(3)
    root.right.left = TreeNode(6)
    root.right.right = TreeNode(9)

    sol = Solution()
    node = sol.invert_tree(root)
    print (node.val)
    print (node.left.val)
    print (node.right.val)

if __name__ == "__main__":
    main()
