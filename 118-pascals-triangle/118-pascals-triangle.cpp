class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> mat(numRows,vector<int>());
        for(int i=0;i<numRows;i++){
            for(int j=0;j<i+1;j++){
                if(i-1 >=0 && j-1>=0 && j+1 <= i){
                    mat[i].push_back(mat[i-1][j-1]+mat[i-1][j]);
                }
                else{
                    mat[i].push_back(1);
                }
            }
        }
        return mat;
    }
};