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
    public List<Integer> rightSideView(TreeNode root) 
    {
        // List<Integer> ans = new ArrayList<>();
        // if(root == null)
        //     return ans;
        // Queue<Pair<TreeNode,Integer>> q = new LinkedList<>();
        // Map<Integer,Integer> map = new TreeMap<>();
        // q.add(new Pair<>(root,0));
        // while(!q.isEmpty())
        // {
        //     int n = q.size();
        //     for(int i = 0;i<n;i++)
        //     {
        //         Pair<TreeNode,Integer> p = q.poll();
        //         TreeNode key = p.getKey();
        //         int bfs = p.getValue();
        //         map.put(bfs,key.val);
        //         if(key.left!=null)
        //             q.add(new Pair<>(key.left,bfs+1));
        //         if(key.right!=null)
        //             q.add(new Pair<>(key.right,bfs+1));
        //     }
        // }
        // for(int i : map.values())
        // {
        //     ans.add(i);
        // }
        // return ans;
        List<Integer> ans = new ArrayList<>();
        if(root == null)
            return ans;
        recursionRight(root,0,ans);
        return  ans;
    }
    public void recursionRight(TreeNode root,int lev,List<Integer> ans)
    {
        if(root == null)
            return;
        if(ans.size()== lev)
            ans.add(root.val);
        recursionRight(root.right,lev+1,ans);
        recursionRight(root.left,lev+1,ans);
    }
}