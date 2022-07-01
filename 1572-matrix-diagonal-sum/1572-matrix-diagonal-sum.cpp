class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int sum=0;
        for(int i=0;i<mat.size();i++){
            if(i == mat.size()-1-i){
                sum+=mat[i][i];
            }
            else{
            sum+=mat[i][i]+mat[i][mat.size()-1-i];
            }
        }
        return sum;
    }
};