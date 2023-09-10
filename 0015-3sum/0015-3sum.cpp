class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& arr) 
    {
        int n = arr.size();
    vector<vector<int>> ans;
    sort(arr.begin(),arr.end());
    for(int i = 0;i<n;i++)
    {
        if(i>0 and arr[i] == arr[i-1]) continue;
        int j = i+1;
        int k = n-1;
        while(j<k)
        {
            int sum = arr[i]+arr[j]+arr[k];
            if(sum>0)
            {
                k--;
            }
            else if(sum < 0)
            {
                j++;
            }
            else
            {
                ans.push_back({arr[i],arr[j],arr[k]});
                j++;
                k--;
                while(j<k and arr[j] == arr[j-1]) j++;
                while(j<k and arr[k] == arr[k+1]) k--;
            }
        }

    }
    return ans;
    }
};