class Solution {
public:
    vector<vector<int>> dp;
    int f(int i, int j, int m, int n){
        if(i == m - 1 && j == n - 1) return 1;
        if(i >= m || j >= n) return 0;
        if(dp[i][j] != -1) return dp[i][j];
        int down = f(i + 1, j, m, n);
        int right = f(i, j + 1, m, n);
        return dp[i][j] = down + right;
    }
    int uniquePaths(int m, int n){
        dp.resize(m, vector<int>(n, -1));
        return f(0, 0, m, n);
    }
};