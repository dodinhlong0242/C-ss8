#include<stdio.h>

    int main() {
        int arr[] = {5, 10, 15, 20, 30, 35, 50};
        int n = sizeof(arr) / sizeof(arr[0]);
        int searchElement;
        int found = 0;
        printf("nhap phan tu can tim: ");
        scanf("%d", &searchElement);
        for (int i =0; i < n; i++) {
            if(arr[i]== searchElement) {
                printf("vi tri phan tu trong mang la %d\n", i);
                found = 1;
                break;
            }
        }
        if (!found) {
            printf("phan tu khong ton tai trong mang.\n");
        }
        return 0;
    }