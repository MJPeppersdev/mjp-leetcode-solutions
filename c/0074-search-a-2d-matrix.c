bool searchMatrix(int** matrix, int matrixSize, int* matrixColSize, int target){
    int m = matrixSize;
    int n = *matrixColSize;
    
    int low = 0;
    int high = m*n - 1;

    int mid = low + (high - low)/2;


    while (low <= high) {
        int row = mid / n;
        int col = mid % n;

        if (matrix[row][col] > target) 
            high = mid - 1;
        else if (matrix[row][col] < target) 
            low = mid + 1;
        else
            return true;
        mid = low + (high - low)/2;

    }
    
    return false;
    
}
