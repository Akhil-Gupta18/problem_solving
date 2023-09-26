class Solution {
public:
    int searchInsert(vector<int>& arr, int x) {
        int n = arr.size();
        int y = n;
	int h = n-1;
	int l = 0;
	while(l<=h)
	{
		int mid = (l+h)/2;
		if(arr[mid]>=x)
		{
			y = mid;
			h = mid-1;
		}
		else
		{
			l = mid+1;
		}

	}
	return y;
    }
};