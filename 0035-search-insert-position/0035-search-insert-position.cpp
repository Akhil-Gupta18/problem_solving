class Solution {
public:
    int searchInsert(vector<int>& nums, int target) 
    {
       /* int t = nums.size()-1;
        int low = 0,high = t;
        if(target > nums[t])
            return t+1;
         else
        {
            while(low < high)
            {
                if(nums[(low+high)/2] == target)
                {
                    return (low+high)/2;
                }
                else if(nums[(low+high)/2] < target)
                {
                    low = (low+high)/2;
                }
                else
                    high = (low+high)/2;
            }
        }
        return (low+high)/2;*/
        int t = nums.size() - 1;
        int i = 0;
        if(target > nums[t])
            return t+1;
        else
        {
            while(target > nums[i])
            {
                i++;
            }
        }
        return i;
        
    }
};