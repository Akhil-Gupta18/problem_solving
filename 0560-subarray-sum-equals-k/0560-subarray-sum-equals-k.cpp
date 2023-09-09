class Solution {
public:
    int subarraySum(vector<int>& arr, int k) {
        unordered_map<int,int> st;
    st[0] = 1;
    int n = arr.size();
    int sum = 0;
    int cnt = 0;
    for(int i = 0;i<n;i++)
    {
        sum = sum + arr[i];
        int check = sum - k;
        cnt += st[check];
        st[sum]++;
    }
    return cnt;
        
    }
};