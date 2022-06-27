class Solution {
public:
    int nearestValidPoint(int x, int y, vector<vector<int>>& points) {
        int min=2147483647;
        int temp,min_ind=2147483647;
        for(int i=0;i<points.size();i++){
            
                if(x == points[i][0] || y ==  points[i][1]){
                    temp=abs(x - points[i][0])+ abs(y - points[i][1]);
                    if(temp<min){
                        min=temp;
                        min_ind=i;
                    }
                    else if(temp==min && min_ind>i){
                        min_ind=i;
                    }
                }
            
        }
        if(min == 2147483647 ){
            return -1;
        }
        return min_ind;
        
    }
};