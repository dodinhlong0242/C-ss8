#include<stdio.h>

    int main() {
        int n;
        printf("nhap mot so nguyen: ");
        scanf("%d", &n);
        int arr[n][n];
        printf("nhap cac phan tu cho mang %dx%d:\n", n, n);
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                printf("nhap phan tu arr[%d][%d]: ",i ,j);
                scanf("%d", &arr[i][j]);
            }
        }
        printf("ma tran vuong %dx%d:\n", n, n);
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                printf("%d ", arr[i][j]);
            }
            printf("\n");
        }
        return 0;
}