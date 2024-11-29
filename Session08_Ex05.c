#include <stdio.h>

int main() {
    int m, n;
    int i, j;

   
    printf("Nhap so dong m: ");
    scanf("%d", &m);
    printf("Nhap so cot n: ");
    scanf("%d", &n);

   
    int arr[m][n];

   
    printf("Nhap gia tri cho ma tran (%d x %d):\n", m, n);
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            printf("Nhap phan tu tai vi tri [%d][%d]: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

   
    int sum = 0;

   
    for(i = 0; i < n; i++){
	
        sum += arr[i][0];       
        sum += arr[i][n-1];     
    }
    for (j = 0; j < n; j++) {
       
        sum += arr[0][j];       
        sum += arr[m-1][j];     
    }

    
    sum -= arr[0][0];         
    sum -= arr[0][n-1];       
    sum -= arr[m-1][0];       
    sum -= arr[m-1][n-1];     

   printf("Tong cac phan tu tren duong bien ma tran la: %d\n", sum);
    return 0;
}

