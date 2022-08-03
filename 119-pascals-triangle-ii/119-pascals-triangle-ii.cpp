class Solution {
public:
    vector<int> getRow(int rowIndex) {
         vector<vector<int>> mat(rowIndex+1,vector<int>());
        for(int i=0;i<=rowIndex;i++){
            for(int j=0;j<i+1;j++){
                if(i-1 >=0 && j-1>=0 && j+1 <= i){
                    mat[i].push_back(mat[i-1][j-1]+mat[i-1][j]);
                }
                else{
                    mat[i].push_back(1);
                }
            }
        }
        return mat[rowIndex];
    }
};