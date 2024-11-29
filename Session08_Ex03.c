#include <stdio.h>

int main() {
    int n;

    // Yêu c?u ngu?i dùng nh?p vào m?t s? nguyên
    printf("Nhap so nguyen: ");
    scanf("%d", &n);

    // Khai báo m?ng 2 chi?u v?i s? hàng và s? c?t b?ng nhau
    int arr[n][n];

    // Nh?p giá tr? cho m?ng 2 chi?u
    printf("Nhap cac phan tu cho ma tran (%d x %d):\n", n, n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("Nhap phan tu tai vi tri [%d][%d]: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    // In m?ng du?i d?ng ma tr?n vuông
    printf("\nMa tran vuong la:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");  // Chuy?n dòng sau m?i hàng c?a ma tr?n
    }

    return 0;
}

