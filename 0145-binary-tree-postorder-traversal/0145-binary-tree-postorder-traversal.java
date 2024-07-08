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
    public List<Integer> postorderTraversal(TreeNode root) {
        
    List<Integer> arr = new ArrayList<Integer>();
        preorder(root,arr);
        return arr;
        
    }
    public static void preorder(TreeNode n,List<Integer>arr){
        if(n == null)
            return;
   
    preorder(n.left,arr);
    preorder(n.right,arr);
 arr.add(n.val);}
}