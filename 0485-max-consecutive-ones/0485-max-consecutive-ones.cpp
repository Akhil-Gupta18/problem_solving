class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int lmax = 0;
        int nmax = 0;
        int n = nums.size();
        for(int i = 0;i<n;i++)
        {
            if(nums[i] == 1)
                nmax++;
            else
            {
                lmax = max(lmax,nmax);
                nmax = 0;
            }
        }
        lmax = max(lmax,nmax);
        return lmax;
    }
};