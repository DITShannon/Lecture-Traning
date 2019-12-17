Method 1
class Solution {
public:
    int countSquares(vector<vector<int>>& matrix) {
        int m = matrix.size(), n = matrix[0].size(), res = 0;
        
        for (int i = 0; i < m; ++i)
        {
            for (int j = 0; j < n; ++j)
            {
                if (matrix[i][j])
                {
                    res++;
                    for (int d = 1; d < min(n - j, m - i); d++)
                    {
                        int x;
                        for (x = 0; x <= d; ++x)
                            if (matrix[i + d][j + x] == 0 || matrix[i + x][j + d] == 0)
                                break;
                        
                        if (x <= d) break;
                        res++;
                    }
                }
            }
        }
        
        return res;
    }
};

Method 2: DP
class Solution {
public:
  int countSquares(vector<vector<int>>& matrix) {
    int ans = 0, R = matrix.size(), C = matrix[0].size();
    vector<vector<int> > DP(R, vector<int> (C));
    
    for(int i = 0; i < R; i++) { DP[i][0] = matrix[i][0]; }
    for(int j = 0; j < C; j++) { DP[0][j] = matrix[0][j]; }
    
    for(int i = 1; i < R; i++) {
      for(int j = 1; j < C; j++) { 
        if(matrix[i][j] == 1) { DP[i][j] = min(DP[i-1][j-1], min(DP[i][j-1], DP[i-1][j])) + 1; }
      }
    }

    for(int i = 0; i < R; i++) {
      for(int j = 0; j < C; j++) { 
        ans += DP[i][j];
      }
    }
    
    return ans;
  }
};