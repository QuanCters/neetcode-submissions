class NumMatrix {
private:
    vector<vector<int>> sumMat;
public:
    NumMatrix(vector<vector<int>>& matrix) {
        int rows = matrix.size();
        if (rows == 0) return;
        int cols = matrix[0].size();
        sumMat = vector<vector<int>>(rows + 1, vector<int>(cols + 1, 0));
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                sumMat[i + 1][j + 1] = matrix[i][j] 
                                     + sumMat[i][j + 1] 
                                     + sumMat[i + 1][j] 
                                     - sumMat[i][j];
            }
        } 
    }
    
    int sumRegion(int row1, int col1, int row2, int col2) {
        row1++; col1++; row2++; col2++;
        int bottomRight = this->sumMat[row2][col2]; 
        int above = this->sumMat[row1-1][col2];
        int left = this->sumMat[row2][col1 - 1];
        int topLeft = this->sumMat[row1-1][col1-1];
        return bottomRight - above - left + topLeft;
    }
};

/**
 * Your NumMatrix object will be instantiated and called as such:
 * NumMatrix* obj = new NumMatrix(matrix);
 * int param_1 = obj->sumRegion(row1,col1,row2,col2);
 */