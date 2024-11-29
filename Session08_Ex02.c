#include <stdio.h>

int main() {
   
    int arr[] = {10, 20, 30, 40, 50};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x, found = 0;
    int i;

   
    printf("Nhap phan tu can tim: ");
    scanf("%d", &x);

    
    for (i = 0; i < n; i++) {
        if (arr[i] == x) {
            printf("Vi tri phan tu trong mang la: %d\n", i); 
            found = 1;  
            break;
        }
    }

    if (!found) {
        printf("Phan tu khong ton tai trong mang.\n");
    }

    return 0;
}

