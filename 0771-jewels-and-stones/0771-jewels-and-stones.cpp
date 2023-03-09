class Solution {
public:
    int numJewelsInStones(string jewels, string stones) 
    {
        map <char , int> count;
        int n = stones.size();
        int j = jewels.size();
        for(int i = 0 ; i<n;i++ )
        {
            count[stones[i]]++;
        }
        int val = 0;
        for(int i = 0;i<j;i++)
        {
            val += count[jewels[i]];
        }
        return val;
    }
};