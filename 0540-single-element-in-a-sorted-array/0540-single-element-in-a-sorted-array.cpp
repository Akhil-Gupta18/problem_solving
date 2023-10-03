class Solution {
public:
    int singleNonDuplicate(vector<int>& arr) {
     int n = arr.size();
	if(n == 1)
	return arr[0];
    if(arr[0] != arr[1])
        return arr[0];
    if(arr[n-1]!=arr[n-2])
        return arr[n-1];
    
	int l = 0;
	int h = n-1;
	while(l<=h)
	{
		int mid = (l+h)/2;
		if(arr[mid] == arr[mid-1] and mid!=0)
		{
			int k = mid - l + 1;
			if(k%2 == 0)
			l = mid+1;	
			else
			h = mid;
		}
		else if(mid < n and arr[mid] == arr[mid+1])
		{
			int k = h - mid +1;
			if(k%2 == 0)
			h = mid - 1;
			else
			l = mid;
		}
		else
		{
			return arr[mid];
		}
	}
	return -1;   
    }
};