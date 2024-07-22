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
    public int countNodes(TreeNode root) 
    {
        // if(root == null)
        //     return 0;
        // int cnt = 1;
        // Queue<TreeNode> q = new LinkedList<>();
        // q.add(root);
        // while(!q.isEmpty())
        // {
        //     int n = q.size();
        //     for(int i = 0;i<n;i++)
        //     {
        //         TreeNode temp = q.poll();
        //         if(temp.left!=null)
        //         {
        //             cnt++;
        //             q.add(temp.left);
        //         }
        //         if(temp.right!=null)
        //         {
        //             cnt++;
        //             q.add(temp.right);
        //         }
        //     }
        // }
        // return cnt;
        if(root == null)
            return 0;
        return 1+countNodes(root.left)+countNodes(root.right);
    }
}