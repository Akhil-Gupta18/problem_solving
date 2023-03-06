class Solution {
public:
    int majorityElement(vector<int>& nums) 
    {
        int n = nums.size();
        int gcount = 0;
        int lcount = 0;
        sort(nums.begin(),nums.end());
        int g = nums[0];
        int it = nums[0];
        for(int i = 0;i<n;i++)
        {
            if(g == nums[i])
            {
                lcount++;
                cout<<lcount<<" ";
            }
            else
            {
                if(lcount > gcount)
                {
                    gcount = lcount;
                    lcount = 1;
                    g = nums[i];
                    it = nums[i-1];
                }
                else
                {
                    lcount = 1;
                    g = nums[i];
                }
            }
        }
       // cout<<lcount<<endl<<gcount<<endl;
      if(lcount > gcount)
      {
          gcount = lcount;
          it = nums[n-1];
      }
        //cout<<gcount;
        return it;
    }
};