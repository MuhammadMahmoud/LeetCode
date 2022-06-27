class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
        if(original.size() == m*n){
        vector<vector<int>> reshaped(m,vector<int>());
        for(int i=0,c=0;i<m;i++){
            for(int j=0;j<n;j++){
                reshaped[i].push_back(original[c]);
                c++;
            }
        }
        return reshaped;
        }
        else{
            vector<vector<int>> emp;
            return emp;
        }
    }
};