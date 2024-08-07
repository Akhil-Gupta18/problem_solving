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
    public int minDepth(TreeNode root) 
    {
        if(root == null)
            return 0;
        Queue<TreeNode> q = new LinkedList<>();
        q.add(root);
        int level = Integer.MAX_VALUE;
        int l = 0;
        while(!q.isEmpty())
        {
            l++;
            int n = q.size();
           // TreeNode temp = q.poll();
            for(int i = 0;i<n;i++)
            {
                TreeNode temp = q.poll();
                if(temp.left == null && temp.right == null )
                {
                    level = Math.min(l,level);
                    return l;
                }
                else
                {
                    if(temp.left!=null)
                        q.add(temp.left);
                    if(temp.right!=null)
                        q.add(temp.right);
                }
            }
        }
        return level;
    }
}