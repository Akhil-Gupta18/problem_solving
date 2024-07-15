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
    public int maxDepth(TreeNode root) 
    {
        if(root == null)
            return 0;
        int n = heightOfTree(root,0);
        return n;
    }
    public int heightOfTree(TreeNode node, int level)
    {
        if(node == null)
            return level;
        return Math.max(heightOfTree(node.right,level+1),heightOfTree(node.left,level+1));
    }
}