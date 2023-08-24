class Solution {
public:
    int removeDuplicates(vector<int>& nums) 
    {
        set<int> se (nums.begin(),nums.end());
        int t = se.size();
        nums.clear();
        nums.assign(se.begin(),se.end());
        return t;
    }
};