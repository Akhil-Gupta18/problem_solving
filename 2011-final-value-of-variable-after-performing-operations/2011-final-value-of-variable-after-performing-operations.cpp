class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) 
    {
       /* string prin = "++X";
        string poin = "X++";
        int n = operations.size();
        int val = 0;
        for(int i = 0 ; i<n;i++)
        {
            if(operations[i] == prin)
            {
                ++val;
            }
            else if(operations[i] == poin)
            {
                ++val;
            }
            else
            {
                --val;
            }
                
        }
        return val;*/
        int val = 0;
        for(string &s : operations)
        {
            if(s[1] == '+') val++;
            else
                --val;
        }
        return val;
        
    }
};