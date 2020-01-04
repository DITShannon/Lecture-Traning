Method1: combination//(m-1 + n-1)! / ((m-1)! * (n-1)!) 
class Solution {
public:
   int uniquePaths(int m, int n) {        
    int large = max(m,n)-1, small = min(m,n)-1;
       
    if (large == 0 || small == 0) return 1;
       
    long int numerator = 1, denominator = 1;E
    for (int i=1; i<=small; ++i)
    {
        numerator *= large + i;
        denominator *= i;
    }
       
       return numerator/denominator;  
   }
};

Method2: dynamic programming
class Solution {
public:
    int uniquePaths(int m, int n) {
        int grid[m][n], col, row;
        
        for(col=0; col<m; col++)
            grid[col][0] = 1;
        for(row=0; row<n; row++)
            grid[0][row] = 1;
        
        for(col=1; col<m; col++)
            for(row=1; row<n; row++)
                grid[col][row] = grid[col][row-1] + grid[col-1][row];
        
        return grid[m-1][n-1];
    }
};