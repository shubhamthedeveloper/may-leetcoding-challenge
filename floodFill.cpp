class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        int n = image.size();
        int m = image[0].size();
        
        dfs(image,sr,sc,image[sr][sc],newColor,n,m);
        return image;
    }
    
    void dfs(vector<vector<int>>& image, int r, int c,int target, int newColor,int n,int m){
        if(r < 0 || c<0 ||r == n || c==m|| image[r][c] == newColor || image[r][c] != target) return;
        image[r][c] = newColor;
        dfs(image,r+1,c,target,newColor,n,m);
        dfs(image,r-1,c,target,newColor,n,m);
        dfs(image,r,c+1,target,newColor,n,m);
        dfs(image,r,c-1,target,newColor,n,m);
        
    }
    
    
    
};