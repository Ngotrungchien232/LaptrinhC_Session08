#include <stdio.h>

int main() {
    int n;
    int i, j;

   
    printf("Nhap kich thuoc ma tran vuong n (so dong = so cot): ");
    scanf("%d", &n);

    
    int arr[n][n];

    
    printf("Nhap gia tri cho ma tran (%d x %d):\n", n, n);
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("Nhap phan tu tai vi tri [%d][%d]: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

  
    int sum = 0;
    printf("\nCac phan tu tren duong cheo chinh cua ma tran la:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i][i]);
        sum += arr[i][i];
    }

    
    printf("\nTong cac phan tu tren duong cheo chinh la: %d\n", sum);

    return 0;
}

