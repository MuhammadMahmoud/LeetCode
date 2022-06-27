class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        // (r * c)
        int rr = mat.size(), cc = mat[0].size();
        if(rr * cc != r * c) return mat;
        
        vector<vector<int>> res(r, vector<int>(c));
        for(int i = 0; i < r * c; i++) res[i / c][i % c] = mat[i / cc][i % cc];
        
        return res;
    }
};