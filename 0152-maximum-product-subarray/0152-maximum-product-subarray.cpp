class Solution {
public:
    int maxProduct(vector<int>& arr) {
        int maxi  = INT_MIN;
	int n = arr.size();
	int prfix = 1;
	int sffix = 1;
    bool t = false;
	for(int i = 0;i<n;i++)
	{
		if(prfix  == 0)
		{
            t = true;
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
        if(maxi < 0 and t)
            return 0;
	return maxi;
        
    }
};