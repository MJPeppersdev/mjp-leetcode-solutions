class Solution {
    public int minFallingPathSum(int[][] matrix) {
        int N = matrix.length;

        for(int r = 1; r < N; r++){
            for(int c = 0; c < N; c++){
                int mid = matrix[r-1][c];
                int left = (c > 0)? matrix[r-1][c-1]: Integer.MAX_VALUE;
                int right = (c < N-1)? matrix[r-1][c+1]: Integer.MAX_VALUE;
                matrix[r][c] = matrix[r][c] + Math.min(left, Math.min(mid, right));
            }
        }
        int res = Integer.MAX_VALUE;
        for(int i = 0; i < N; i++){
            res = Math.min(res, matrix[N-1][i]);
        }
        return res;
    }
}
