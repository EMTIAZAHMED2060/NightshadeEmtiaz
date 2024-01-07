class TreeNode:
    def __init__(self, val):
        self.val = val
        self.left = None
        self.right = None

def no_of_nodes(root):
    if root is None:
        return 0
    return 1 + no_of_nodes(root.left) + no_of_nodes(root.right)

def complete_tree(root, a, i=0):
    total_nodes = no_of_nodes(root)

    if root is None:
        return True
    if i >= total_nodes or root.val != a[i]:
        return False

    return complete_tree(root.left, a, 2 * i + 1) and complete_tree(root.right, a, 2 * i + 2)

def main():
    t = int(input())
    
    for _ in range(t):
        n = int(input())
        a = list(map(int, input().split()))

        # Constructing a binary tree with arbitrary values
        root = TreeNode(-1)  # Start with an arbitrary value, it doesn't affect the validity check

        # Check if the binary tree is complete based on the given distances
        if complete_tree(root, a, 0):
            print("YES")
        else:
            print("NO")

if __name__ == "__main__":
    main()
