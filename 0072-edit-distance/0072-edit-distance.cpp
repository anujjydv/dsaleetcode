class Solution {
public:
    vector<vector<int>> dp;

    int f(int i, int j, string &word1, string &word2){
        if(i == 0) return j;
        if(j == 0) return i;
        if(dp[i][j] != -1)
            return dp[i][j];
        if(word1[i - 1] == word2[j - 1])
            return dp[i][j] = f(i - 1, j - 1, word1, word2);
        int insert = f(i, j - 1, word1, word2);
        int del = f(i - 1, j, word1, word2);
        int replace = f(i - 1, j - 1, word1, word2);

        return dp[i][j] = 1 + min({insert, del, replace});
    }

    int minDistance(string word1, string word2) {

        int n = word1.size();
        int m = word2.size();

        dp.assign(n + 1, vector<int>(m + 1, -1));

        return f(n, m, word1, word2);
    }
};