class Solution {
public:
	vector<vector<int>> flipAndInvertImage(vector<vector<int>>& A) {

		for (int r = 0; r < A[0].size(); r++)
		{
			vector<int> row = A[r];
			int i = 0;

			for (vector<int>::reverse_iterator it = row.rbegin(); it != row.rend(); ++it)
			{
				A[r][i] = 1 - (*it);
				i++;
			}
		}

		return A;
	}
};