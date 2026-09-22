#include <stdio.h>

#define ROWS 3
#define COLS 3

int main() {
    int matrixA[ROWS][COLS] = {
        {10, 20, 30},
        {40, 50, 60},
        {70, 80, 90}
    };
    
    int matrixB[ROWS][COLS] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    
    int diffMatrix[ROWS][COLS];
    int i, j;

    for(i = 0; i < ROWS; i++) {
        for(j = 0; j < COLS; j++) {
            diffMatrix[i][j] = matrixA[i][j] - matrixB[i][j];
        }
    }

    printf("Resulting Difference Matrix:\n");
    for(i = 0; i < ROWS; i++) {
        for(j = 0; j < COLS; j++) {
            printf("%d\t", diffMatrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}
