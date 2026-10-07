class NumMatrix {
private:
    vector<vector<int>> sumMatrix;
public:
    NumMatrix(vector<vector<int>>& matrix) {
        if (matrix.empty() || matrix[0].empty()) return;
        int row = matrix.size();
        int col = matrix[0].size();
        sumMatrix.assign(row+1, vector<int>(col+1, 0));
        for (int i = 0; i < row; i++) {
            for (int j = 0; j < col; j++) {
                sumMatrix[i+1][j+1] = matrix[i][j] + sumMatrix[i][j+1] + sumMatrix[i+1][j] - sumMatrix[i][j];
            }
        }
    }
    
    int sumRegion(int row1, int col1, int row2, int col2) {
        return this->sumMatrix[row2+1][col2+1] - this->sumMatrix[row1][col2+1] - this->sumMatrix[row2+1][col1] + this->sumMatrix[row1][col1];
    }
};

/**
 * Your NumMatrix object will be instantiated and called as such:
 * NumMatrix* obj = new NumMatrix(matrix);
 * int param_1 = obj->sumRegion(row1,col1,row2,col2);
 */