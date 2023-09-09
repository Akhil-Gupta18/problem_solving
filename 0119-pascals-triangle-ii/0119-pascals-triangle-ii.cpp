class Solution {
public:
    vector<int> getRow(int n) {
         vector<vector<int>> pascal;
        vector<int> temp;
        temp.push_back(1);
        pascal.push_back(temp);
        if(n == 0)
        return temp;
       temp.clear();
        for(int i = 1;i<=n;i++)
        {
            for(int j = 0;j<=i;j++)
            {
                if(j==0 or j == i)
                {
                    temp.push_back(1);
                }
                else
                {
                    temp.push_back(pascal[i-1][j-1]+pascal[i-1][j]);
                }
            }
            pascal.push_back(temp);
            if(i!=n)
            temp.clear();
                
        }
        return temp;
    }
};