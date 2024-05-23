void setZeroes(int** matrix, int matrixSize, int* matrixColSize){
    int ROW = matrixSize;
    int COL = *matrixColSize;
    bool rowZero = false;
    
    for (int r = 0; r < ROW; ++r) {
        for (int c = 0; c < COL; ++c) {
            if (matrix[r][c] == 0) {
                matrix[0][c] = 0;
                if (r > 0) 
                    matrix[r][0] = 0;
                else
                    rowZero = true;
            }
        }
    }

    for (int r = 1; r < ROW; ++r) {
        for (int c = 1; c < COL; ++c) {
            if (matrix[0][c] == 0 || matrix[r][0] == 0)
                matrix[r][c] = 0;
        }
    }

    // Set first column as zeros if matrix[0][0] is set
    if (matrix[0][0] == 0) {
        for (int r = 0; r < ROW; ++r) {
            matrix[r][0] = 0;
        }
    }

    // Set first row as zeros if rowZero is true
    if (rowZero) {
        for (int c = 0; c < COL; ++c) {
            matrix[0][c] = 0;
        }
    }
}