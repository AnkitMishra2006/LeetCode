class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& mat) {
        vector<int> ans;
        int m = mat.size(), n = mat[0].size();
        int srow = 0, erow = m - 1;
        int scol = 0, ecol = n - 1;

        while (srow <= erow && scol <= ecol) {
            // Top
            for (int i = scol; i <= ecol; i++)
                ans.push_back(mat[srow][i]);

            // Right
            for (int i = srow + 1; i <= erow; i++)
                ans.push_back(mat[i][ecol]);

            // Bottom
            for (int i = ecol - 1; i >= scol; i--) {
                if (srow == erow)
                    break;
                ans.push_back(mat[erow][i]);
            }

            // Left
            for (int i = erow - 1; i >= srow + 1; i--) {
                if (scol == ecol)
                    break;
                ans.push_back(mat[i][scol]);
            }

            srow++;
            erow--;
            scol++;
            ecol--;
        }
        return ans;
    }
};