class Solution {
public:
    int maxSubArray(vector<int>& nums) 
    {
        /*long long int sum=0;
        int it=0;
        int i=0;
        long long int k;
        k=nums[0];*/
//vector<long long int> temp;
        /*while(it<nums.size())
        {
            sum=sum+nums[i];
            if(k<sum)
                k=sum;
            if(i==(nums.size()-1))
            {
                it++;
                i=it;
                sum=0;
            }
            else
            {
                i++;
            }
            
        }*/
        
        /*int retu;
        retu = *max_element(temp.begin(),temp.end());*/
        //return k; 
        int gmax = nums[0];
        int lmax = nums[0];
        for(int i=1;i<nums.size();i++)
        {
            lmax=max(nums[i],lmax+nums[i]);
            if(gmax<lmax)
                gmax=lmax;
        }
        return gmax;
        
        
    }
};