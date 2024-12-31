class Solution {
public:
    int row[8] = {-1, -1, -1, 1, 1, 1, 0, 0};
    int col[8] = {-1, 0, 1, -1, 0, 1, -1, 1};
    int r, c;

    bool isvalid(int i, int j) {
        return i >= 0 && i < r && j >= 0 && j < c;
    }
    vector<vector<int>> imageSmoother(vector<vector<int>>& img) {
        vector<vector<int>> ans=img;
        r=img.size();
        c=img[0].size();
        for(int i=0;i<r;i++) {
            for(int j=0;j<c;j++) {
                 int avrage=img[i][j],count=1,total=0;
                for(int k=0;k<8;k++) {
                    int new_r=i+row[k];
                    int new_c=j+col[k];
                    if(isvalid(new_r,new_c)) {
                        avrage+=(img[new_r][new_c]);
                        count++;
                    }
                }
               total=avrage/count;
               ans[i][j]=total;
            }
        }
        return ans;
    }
};