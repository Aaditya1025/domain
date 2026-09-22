#include <stdio.h>

#define ROWS 3
#define COLS 3

int main() {
    
    int matrixA[ROWS][COLS] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    
    int matrixB[ROWS][COLS] = {
        {9, 8, 7},
        {6, 5, 4},
        {3, 2, 1}
    };
    
    
    int sumMatrix[ROWS][COLS];
    int i, j;

   
    for(i = 0; i < ROWS; i++) {
        for(j = 0; j < COLS; j++) {
            sumMatrix[i][j] = matrixA[i][j] + matrixB[i][j];
        }
    }

    
    printf("Resulting Sum Matrix:\n");
    for(i = 0; i < ROWS; i++) {
        for(j = 0; j < COLS; j++) {
            printf("%d\t", sumMatrix[i][j]);
        }
        printf("\n"); 
    }

    return 0;
}
