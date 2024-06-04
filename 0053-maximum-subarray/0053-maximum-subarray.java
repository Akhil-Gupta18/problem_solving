class Solution {
    public int maxSubArray(int[] nums) {
        int temp = Integer.MIN_VALUE;
        int n = nums.length;
        int sum = 0;
        for(int i = 0;i<n;i++)
        {
            sum = Math.max(nums[i],sum+nums[i]);
            temp  = Math.max(sum,temp);
        }
        return temp;
    }
}