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
        
        int n = heightOfTree(root);
        return n;
    }
    public int heightOfTree(TreeNode node)
    {
        if(node == null)
            return 0;
        int left = heightOfTree(node.left);
        int right = heightOfTree(node.right);
        return Math.max(left,right)+1;
    }
}