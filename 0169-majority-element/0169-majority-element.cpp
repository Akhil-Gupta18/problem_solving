class Solution {
public:
    int majorityElement(vector<int> v) {
	// Write your code here
    int cnt = 0;
    int major;
    for(int i = 0;i<v.size();i++)
    {
        if(cnt == 0)
        {
            cnt = 1;
            major = v[i];
        }
        else if(major==v[i])
        {
            cnt++;
        }
        else
        cnt--;
    }
    int cnt1 = 0;
    for(int i = 0;i<v.size();i++)
    {
        if(v[i] == major)
        cnt1++;
    }
    if(cnt1>v.size()/2)
    return major;
    return -1;
}
};