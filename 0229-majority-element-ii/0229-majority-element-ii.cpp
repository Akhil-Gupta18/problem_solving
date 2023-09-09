class Solution {
public:
    vector<int> majorityElement(vector<int>& v) {
   int cnt1 = 0,cnt2 = 0;
	int e1 = INT_MIN,e2 = INT_MIN;
	int n = v.size();
	for(int i : v)
	{
		if(cnt1 == 0 and e2!=i)
		{
			cnt1 = 1;
			e1 = i;
		}
		else if(cnt2 == 0 and e1!=i)
		{
			cnt2 = 1;
			e2 = i;
		}
		else if(e1 == i) cnt1++;
		else if(e2 == i) cnt2++;
		else{
			cnt1--;
			cnt2--;
		}
	}
        cout<<e1<<" "<<e2;
	cnt1 = 0,cnt2 = 0;
	for(int i : v)
	{
		if(e1 == i) cnt1++;
		if(e2 == i) cnt2++;
	}
	int m = n/3 +1;
	vector<int> k;
	if(cnt1>=m) k.push_back(e1);
	if(cnt2>=m) k.push_back(e2);
	sort(k.begin(),k.end());
	return k;
    }
};