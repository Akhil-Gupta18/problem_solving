class Solution {
public:
    int maxProduct(vector<int>& arr) {
        int maxi  = INT_MIN;
	int n = arr.size();
	int prfix = 1;
	int sffix = 1;
	for(int i = 0;i<n;i++)
	{
		if(prfix  == 0)
		{
			prfix  = 1;
		}
		if(sffix == 0)
		{
			sffix = 1;
		}
		prfix = prfix * arr[i];
		sffix = sffix * arr[n-i-1];
		maxi = max(maxi,max(prfix,sffix));
	}
	return maxi;
        
    }
};