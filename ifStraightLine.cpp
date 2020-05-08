class Solution {
public:
    
    double getslope(vector<int>& p1, vector<int>& p2){
        double num = p2[1] - p1[1];
        if (num == 0) return DBL_MAX;
        double deno = p2[0] - p1[0];
        return abs(deno/num);
    }
    
    bool checkStraightLine(vector<vector<int>>& coordinates) {
        double slope = getslope(coordinates[0],coordinates[1]);
        
        for(int i=2;i<coordinates.size();i++){
            double newslope = getslope(coordinates[i-1],coordinates[i]);
                if(newslope != slope){
                    return false;
                }
        }
        return true;
    }
};