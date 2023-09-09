class Solution {
public:
    vector<int> majorityElement(vector<int>& v) {
        vector<int> ans;
	unordered_map<int,int> m;
	int n = v.size();
	for(int i : v)
	{
		m[i]++;
		if(m[i]> n/3)
		{
			ans.push_back(i);
			m[i] = INT_MIN;
		}
	}
	return ans;
    }
};