class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
    unordered_set<int> row;
	unordered_set<int> column;
    int m  = matrix[0].size();
    int n = matrix.size();
	for(int i = 0;i<n;i++)
	{
		for(int j = 0;j<m;j++)
		{
			if(matrix[i][j] == 0)
			{
				row.insert(i);
				column.insert(j);
			}
		}
	}
	if(row.size() == 0 and column.size() ==0)
	return;
	//if(row.size() == n and column.size() == m)
	//return matrix;
	for(auto it : row)
	{
		for(int k = 0;k<m;k++)
		{
			matrix[it][k] = 0;
		}
	}
	for(auto it : column)
	{
		for(int k =0;k<n;k++)
		{
			matrix[k][it] = 0;
		}
	}
	return ;
        
    }
};