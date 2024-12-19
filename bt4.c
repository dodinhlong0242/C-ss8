#include<stdio.h>

    int main() {
        int matrix[3][4] = {
            {5, 10, 15, 20},
            {8, 7, 6, 5},
            {10, 20, 30, 40}
        }; 
        
        int max = matrix[0][0];
        int rows = 3;
        int cols = 4;
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                if (matrix[i][j] > max) {
                    max = matrix[i][j];
                }
            }
        }
        printf("phan tu lon nhat trong mang la: %d\n", max);
        return 0;
    }