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
    public List<Integer> inorderTraversal(TreeNode root) 
    {
        List<Integer> arr = new ArrayList<Integer>();
        inoreder(root,arr);
        return arr;
        
    }
    private static void inoreder(TreeNode n,List<Integer> arr)
    {
        if(n == null)
            return   ;
        inoreder(n.left,arr);
        arr.add(n.val);
        inoreder(n.right,arr);
    }
    
}