#include <stdio.h>

int main() {
    int matrix[2][3] = { {1, 4, 2}, {3, 6, 8} };

    printf("%d\n", matrix[0][2]);  // Outputs 2

    matrix[0][0] = 9; //Change the value of the first row, first column from 1 to 9

    printf("%d\n", matrix[0][0]);

    printf("\n");

    int i, j;
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d\n", matrix[i][j]);
        }
    }
}