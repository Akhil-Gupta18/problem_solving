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
    public int diameterOfBinaryTree(TreeNode root) 
    {
        int arr[] = new int[1];
        arr[0] = -1;
        dfs(root,arr);
        return arr[0];
        
    }
    public int dfs(TreeNode root, int[] arr)
    {
        if(root == null)
            return 0;
        int left = dfs(root.left,arr);
        int right = dfs(root.right,arr);
        arr[0] = Math.max(arr[0],left+right);
        return Math.max(left,right)+1;
    }
    
}