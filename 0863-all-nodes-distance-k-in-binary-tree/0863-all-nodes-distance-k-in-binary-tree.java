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
    public List<Integer> distanceK(TreeNode root, TreeNode target, int k) 
    {
         List<Integer> ans = new ArrayList<>();
        if(root == null)
            return ans;
        Queue<TreeNode> q = new LinkedList<>();
        Map<TreeNode,TreeNode> parentMap = new HashMap<>();
        parentMap.put(root,null);
        q.add(root);
        while(!q.isEmpty())
        {
            int n = q.size();
            for(int i = 0;i<n;i++)
            {
                TreeNode temp = q.poll();
                if(temp.left!=null)
                {
                    parentMap.put(temp.left,temp);
                    q.add(temp.left);
                }
                if(temp.right!=null)
                {
                    parentMap.put(temp.right,temp);
                    q.add(temp.right);
                }
            }
        }
        Queue<TreeNode> test = new LinkedList<>();
        findDist(target,parentMap,k,ans,test);
        return ans;
    }
    public void findDist(TreeNode target,Map<TreeNode,TreeNode> m,int k,List<Integer> ans,Queue<TreeNode> q)
    {
        if(target == null)
            return;
        q.add(target);
        if(k == 0)
        {
            ans.add(target.val);
            return;
        }
        if(!q.contains(target.left))
        {
            findDist(target.left,m,k-1,ans,q);
        }
        if(!q.contains(target.right))
        {
            findDist(target.right,m,k-1,ans,q);
        }
        if(!q.contains(m.get(target)))
        {
            findDist(m.get(target),m,k-1,ans,q);
        }
    }
}