/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode(int x) { val = x; }
 * }
 */
class Solution {
    public TreeNode lowestCommonAncestor(TreeNode root, TreeNode p, TreeNode q) 
    {
            return  lower(root,p,q);
    }
    public TreeNode lower(TreeNode root,TreeNode p,TreeNode q)
    {
        if(root == null)
            return root;
        if(root == p || root == q)
            return root;
        //else if()
        TreeNode left = lower(root.left,p,q);
        TreeNode right = lower(root.right, p,q);
        if(left == null)
            return right;
        else if(right == null)
            return left;
        else
            return root;
        
    }
}