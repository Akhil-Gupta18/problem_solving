/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode() {}
 *     TreeNode(int val) { this.val = val; }
 *     TreeNode(int val, TreeNode left, TreeNode right) {
 *         this.val = val;
 *         this.left = left;
 *         this.right = right;
 *     }
 * }
 */
class Solution {
    public boolean isBalanced(TreeNode root) {
        if(root == null)
            return true;
        boolean leftB = isBalanced(root.left);
        boolean rightB = isBalanced(root.right);
        if(leftB && rightB)
        {
            int left = heightTree(root.left);
            int right = heightTree(root.right);
            if(Math.abs(left-right)<=1)
                return true;
        }
        return false;
        
    }
    public int heightTree(TreeNode node)
    {
        if(node == null)
            return 0;
        Queue<TreeNode> q = new LinkedList<>();
        q.add(node);
        int level = 0;
        while(!q.isEmpty())
        {
            level++;
            int n = q.size();
            for(int i = 0;i<n;i++)
            {
                TreeNode temp = q.poll();
                if(temp.left!=null)
                    q.add(temp.left);
                if(temp.right!=null)
                    q.add(temp.right);
            }
        }
        return level;
    }
}