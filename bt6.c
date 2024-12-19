#include<stdio.h>

    int main() {
        int matrix[4][4] = {
            {1, 2, 3, 4},
            {5, 6, 7, 8},
            {9, 10, 11, 12},
            {13, 14, 15, 16}
        };
        int size = 4;
        void printDiagonalAndSum(int size, int matrix[size][size]){
            int sum = 0;
            printf("cac phan tu tren duong cheo chinh la: ");
            for (int i = 0; i < size; i++) {
                printf("%d ", matrix[i][i]);
                sum += matrix[i][i];
            }
            printf("\ntong cac phan tu tren duong cheo chinh la: %d\n", sum);
        }
        printDiagonalAndSum(size, matrix);
        return 0;
    }