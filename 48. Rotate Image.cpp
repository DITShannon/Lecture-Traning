class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();
        
        if(n>1)
        {
            int tmp;
            
            for(int h=0; h<(n>>1); h++)
            {
                for(int i=h; i<n-1-h; ++i)
                {
                    tmp = matrix[h][i];
                    matrix[h][i] = matrix[n-1-i][h];
                    matrix[n-1-i][h] = matrix[n-1-h][n-1-i];
                    matrix[n-1-h][n-1-i] = matrix[i][n-1-h];
                    matrix[i][n-1-h] = tmp;
                }
            }
        }     
    }
};