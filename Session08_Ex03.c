#include <stdio.h>

int main() {
    int n;

    // Y�u c?u ngu?i d�ng nh?p v�o m?t s? nguy�n
    printf("Nhap so nguyen: ");
    scanf("%d", &n);

    // Khai b�o m?ng 2 chi?u v?i s? h�ng v� s? c?t b?ng nhau
    int arr[n][n];

    // Nh?p gi� tr? cho m?ng 2 chi?u
    printf("Nhap cac phan tu cho ma tran (%d x %d):\n", n, n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("Nhap phan tu tai vi tri [%d][%d]: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    // In m?ng du?i d?ng ma tr?n vu�ng
    printf("\nMa tran vuong la:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");  // Chuy?n d�ng sau m?i h�ng c?a ma tr?n
    }

    return 0;
}

