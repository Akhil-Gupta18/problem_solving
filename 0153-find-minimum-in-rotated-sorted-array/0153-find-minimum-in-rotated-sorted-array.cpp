class Solution {
public:
    int findMin(vector<int>& arr) {
        int min = INT_MAX;
	int l = 0,h = arr.size()-1;
	while(l<=h)
	{
		int mid = (l+h)/2;
		if(arr[mid]<=arr[h])
		{
			if(arr[mid] < min)
			min = arr[mid];
			h = mid-1;
		}
		else
		{
			if(arr[l]<min)
			min = arr[l];	
			l = mid+1;

		}
	}
	return min;
    }
};