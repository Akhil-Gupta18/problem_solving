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
    public TreeNode buildTree(int[] preorder, int[] inorder) 
    {
        Map<Integer,Integer> inMap = new HashMap<>();
        for(int i = 0;i<inorder.length;i++)
        {
            inMap.put(inorder[i],i);
        }
        TreeNode root = makeTree(preorder,0,preorder.length-1,inorder,0,inorder.length-1,inMap);
        return root;
    }
    public TreeNode makeTree(int[] pre, int preS,int preE,int[] inO,int inS,int inE,Map<Integer,Integer> inMap)
    {
        if(preS>preE || inS>inE) return null;
        TreeNode root = new TreeNode(pre[preS]);
        int inRoot = inMap.get(pre[preS]);
        int numsLeft = inRoot - inS;
        root.left = makeTree(pre,preS+1,preS+numsLeft,inO,inS,inRoot-1,inMap);
        root.right = makeTree(pre,preS+numsLeft+1,preE,inO,inRoot+1,inE,inMap);
        return root;
    }
}