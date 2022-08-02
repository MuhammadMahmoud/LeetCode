class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        for(int i=0;i<matrix.size();i++){
            int l=0,r=matrix[i].size()-1;
            while(r>=l){
                int m=(l+r)/2;
                if(matrix[i][m] == target) return true;
                else if(matrix[i][m] > target) r=m-1;
                else l=m+1;
            }
        }
        return false;
    }
};