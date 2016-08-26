class Solution {
public:    
    /**
     * @param A, B: Two string.
     * @return: the length of the longest common substring.
     */
    int longestCommonSubstring(string &A, string &B) {
        int n = A.size(), m = B.size();
        if (!n || !m) return 0;
        vector<vector<int>> v(n, vector<int>(m, 0));
        int maxLen = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (A[i] == B[j]) {
                    if (i > 0 && j > 0) {
                        v[i][j] = 1 + v[i - 1][j - 1];
                    } else {
                        v[i][j] = 1;
                    }
                    maxLen = max(maxLen, v[i][j]);
                }
            }
        }
        return maxLen;
    }
};
