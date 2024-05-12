 #include <stdio.h>

int main() {
    int rows, cols, i, j;

    printf("Enter the array's row size: ");
    scanf("%d", &rows);
    printf("Enter the array's column size: ");
    scanf("%d", &cols);

    int arrA[rows][cols], arrB[rows][cols], arrC[rows][cols];

    printf("\nEnter array A's elements:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &arrA[i][j]);
        }
    }

    printf("\nEnter array B's elements:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("b[%d][%d] = ", i, j);
            scanf("%d", &arrB[i][j]);
        }
    }

    printf("\nArray C is:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            arrC[i][j] = arrA[i][j] + arrB[i][j];
            printf("%d\t", arrC[i][j]);
        }
        printf("\n");
    }

    return 0;
}

  
 }