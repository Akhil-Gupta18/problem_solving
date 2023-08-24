class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i = 0;
        int n = nums.size();
        int j = -1;
        int zerocnt = 0;
        while(i<n)
        {
            if(nums[i]==0)
            {
                j=i;
                break;
            }
            i++;
        }
        if(j == -1) return;
        for(int i = j+1;i<n;i++)
        {
            if(nums[i]!=0)
            {
                swap(nums[j],nums[i]);
                j++;
            }
        }
        return;
        
    }
};