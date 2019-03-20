/*
 *  rotate(matrix, matrixRowSize-2, matrixColSizes-2)
 */ 
void rotate(int** matrix, int matrixRowSize, int *matrixColSizes) {
    int i, tmp1, tmp2, j;
    int len = matrixRowSize;

    for (j = 0; j < (len + 1) / 2; j++) {
        for (i = j; i < matrixRowSize - 1; i++) {
            tmp1 = matrix[j][i];
            matrix[j][i] = matrix[matrixRowSize - 1 - (i - j)][j];

            tmp2 = matrix[i][matrixRowSize - 1];
            matrix[i][matrixRowSize - 1] = tmp1;

            tmp1 = matrix[matrixRowSize - 1][matrixRowSize - 1 - (i - j)];
            matrix[matrixRowSize - 1][matrixRowSize - 1 - (i - j)] = tmp2;

            matrix[matrixRowSize - 1 - (i - j)][j] = tmp1;
        }
        matrixRowSize -= 1;
    }
}
