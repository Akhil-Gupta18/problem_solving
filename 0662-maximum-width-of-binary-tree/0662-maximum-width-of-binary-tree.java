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
    public int widthOfBinaryTree(TreeNode root) 
    {
        Queue<Pair<TreeNode,Integer>> q = new LinkedList<>();
        q.add(new Pair<>(root,1));
        int b = 0;
        while(!q.isEmpty())
        {
            int n = q.size();
            int nn = q.peek().getValue();
            int mini = Integer.MAX_VALUE;
            int maxi = Integer.MIN_VALUE;
            for(int i = 0;i<n;i++)
            {
                Pair <TreeNode,Integer> p = q.poll();
                TreeNode t = p.getKey();
                int v = p.getValue() - nn;
                mini = Math.min(v,mini);
                maxi= Math.max(v,maxi);
                if(t.left!= null)
                {
                    q.add(new Pair<>(t.left,2*v));
                }
                if(t.right!=null)
                q.add(new Pair<>(t.right,2*v+1));
            }
            
            b = Math.max((maxi-mini)+1,b);
        }
        return b;
    }
}