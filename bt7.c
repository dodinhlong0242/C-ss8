#include <stdio.h>

int main() {
    int n;
    printf("Nhập kích thước của ma trận vuông: ");
    scanf("%d", &n);

    int matrix[n][n];
    printf("Nhập các phần tử của ma trận:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("matrix[%d][%d] = ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
    int sum = 0;
    printf("Các phần tử trên đường chéo chính là: \n");
    for (int i = 0; i < n; i++) {
        printf("%d ", matrix[i][i]); 
        sum += matrix[i][i];  
    }
    printf("\nTổng của các phần tử trên đường chéo chính là: %d\n", sum);

    return 0;
}
