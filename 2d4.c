#include <stdio.h>

int main() {
    int rows = 5, cols = 5, i, j, sum = 0;

    int arr[rows][cols];

    printf("Enter array's elements:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    printf("\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            if (i == 0 || i == 4|| j == 0 || j == 4) {
                printf("%d ", arr[i][j]);
                sum += arr[i][j];
            } else {
                printf("   "); 
            }
        }
        printf("\n");
    }

    printf("\nThe sum of boundary elements of an Array: %d\n", sum);

    return 0;
}


