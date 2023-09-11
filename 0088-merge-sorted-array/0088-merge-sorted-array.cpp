class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) 
    {
      /*  nums1.erase(nums1.begin()+m,nums1.end());
        nums2.insert(nums2.end(),nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        nums1.clear();
        nums1.assign(nums2.begin(),nums2.end());
        /*if(n == 0)
        {}
        else
        {
            int t = min(m,n);
            int i = 0,j = 0;
            while(i < m && j < n)
            {
                if(nums1[i] > nums2[j])
                {
                    swap(nums1[i],nums2[j]);
                    i++;
                }
                else
                {
                    i++;
                    j++;
                }
            }
                
        }*/
        int j=0;
for(int i=m;i<n+m;i++)
{
nums1[i]=nums2[j];
j++;
}
sort(nums1.begin(),nums1.end());

        
    }
};