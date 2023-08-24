class Solution {
public:
    int removeDuplicates(vector<int>& nums) 
    {
       /* set<int> se (nums.begin(),nums.end());
        int t = se.size();
        nums.clear();
        nums.assign(se.begin(),se.end());
        return t;*/
        int j = 1;
        for(int i = 1; i < nums.size(); i++){
            if(nums[i] != nums[i - 1]){
                nums[j] = nums[i];
                j++;
            }
        }
        return j;
    }
};