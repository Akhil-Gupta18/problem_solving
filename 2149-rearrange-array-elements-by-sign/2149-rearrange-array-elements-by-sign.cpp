class Solution {
public:
    vector<int> rearrangeArray(vector<int>& a) {
         int n = a.size();
    int p = 0;
    int k = 1;
    vector<int>ans(n);
    for(int i = 0;i<n;i++)
    {
        if(a[i]>0){
        ans[p] = a[i];
        p = p+2;
        }
        else{
        ans[k] = a[i];
        k = k+2;
        }
    }
    return ans;
    }
};