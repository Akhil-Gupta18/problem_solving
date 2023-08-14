class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {
        /*int low = 0;
        vector <int> pos;
        int high = nums.size() - 1;
        while (low < high)
        {
            if(nums[low] + nums [high] == target)
            {
                pos.push_back(low);
                pos.push_back(high);
                break;
            }
            else if(nums[low] + nums[high] < target)
            {
                low++;
            }
            else
                high--;
            }
        return pos;*/
        int it = 0;
        int i = 1;
        vector <int> pos;
        while(it != nums.size())
        {
            if(nums[it] + nums[i] == target)
            {
                pos.push_back(it);
                pos.push_back(i);
                break;
            }
            else
                i++;
            if(i == nums.size())
            {
                it++;
                i = it+1;
            }

        }
        return pos;
        
        
    }
};