#include <stdio.h>

#define R1 3
#define C1 2
#define R2 2
#define C2 3

int main() {
    int matrixA[R1][C1] = {
        {1, 2},
        {3, 4},
        {5, 6}
    };
    
    int matrixB[R2][C2] = {
        {7, 8, 9},
        {10, 11, 12}
    };
    
    int resultMatrix[R1][C2];
    int i, j, k;

    for(i = 0; i < R1; i++) {
        for(j = 0; j < C2; j++) {
            resultMatrix[i][j] = 0;
        }
    }

    for(i = 0; i < R1; i++) {
        for(j = 0; j < C2; j++) {
            for(k = 0; k < C1; k++) {
                resultMatrix[i][j] += matrixA[i][k] * matrixB[k][j];
            }
        }
    }

    printf("Resulting Product Matrix:\n");
    for(i = 0; i < R1; i++) {
        for(j = 0; j < C2; j++) {
            printf("%d\t", resultMatrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}
