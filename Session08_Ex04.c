#include <stdio.h>

int main() {
    int i, j;
    int arr[3][3] = {
        {1, 5, 7},
        {3, 9, 4},
        {6, 8, 2}
    };

  
    int max = arr[0][0];

   
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            if (arr[i][j] > max) {
                max = arr[i][j];
            }
        }
    }

   
    printf("Phan tu lon nhat trong mang la: %d\n", max);

    return 0;
}

