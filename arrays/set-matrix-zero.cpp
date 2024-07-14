class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int row=matrix.size(),col=matrix[0].size();
        vector <int> rf(row,0);
        vector <int> cf(col,0);
        for(int i=0;i<row;i++)
        {
            for(int j=0;j<col;j++)
            {
                if(matrix[i][j]==0) 
                {
                    rf[i]=1;
                    cf[j]=1;
                }
            }
        }
        for(int i=0;i<row;i++)
        {
            for(int j=0;j<col;j++)
            {
                if(rf[i] || cf[j]) matrix[i][j]=0;
            }
        }
        
    }
};
