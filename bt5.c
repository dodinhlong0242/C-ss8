#include<stdio.h>

     int main() {
        int matrix[4][4] = {
            {1, 2, 3, 4},
            {5, 6, 7, 8},
            {9, 10, 11, 12},
            {13, 14, 15, 16}
        };
        int calculateBoundarySum( int rows, int cols, int matrix[rows][cols]) {
        int total = 0;
        for (int col = 0; col < cols; col++) {
            total += matrix[0][col];
        }
        for (int col = 0; col < cols; col++) {
            total += matrix[rows - 1][col];
        }
        for (int row = 1; row < rows - 1; row++) {
            total += matrix[row][0];
        }
        for (int row = 1; row < rows - 1; row++) {
            total += matrix[row][cols - 1];
        }
        return total;
    }
        int rows = 4, cols = 4;
        int boundarySum = calculateBoundarySum(rows, cols, matrix);
        printf("tong cac phan tu tren duong bien cua ma tran la:%d\n", boundarySum);
        return 0;
}
