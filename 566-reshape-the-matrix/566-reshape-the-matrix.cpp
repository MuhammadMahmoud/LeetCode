class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        if(mat.size()*mat[0].size() == r*c){
            vector<int> flat;
            for(int i=0;i<mat.size();i++){
                for(int j=0;j<mat[i].size();j++){
                    flat.push_back(mat[i][j]);
                }
                mat[i].clear();
            }
            mat.clear();
            cout<<mat.size()<<endl;
            for(int i=0,count=0;i<r;i++){
                mat.push_back(vector<int>());
                for(int j=0;j<c;j++){
                    mat[i].push_back(flat[count]);
                    count++;
                }
            }
            return mat;
        }
        else{
            return mat;
        }
    }
};