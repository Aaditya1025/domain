#include <stdio.h>

#define ROWS 2
#define COLS 3

int main() {
    int matrix[ROWS][COLS] = {
        {1, 2, 3},
        {4, 5, 6}
    };
    
    
    int transpose[COLS][ROWS];
    int i, j;

   
    for(i = 0; i < ROWS; i++) {
        for(j = 0; j < COLS; j++) {
            transpose[j][i] = matrix[i][j];
        }
    }

    printf("Original Matrix:\n");
    for(i = 0; i < ROWS; i++) {
        for(j = 0; j < COLS; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }

    printf("\nTransposed Matrix:\n");
    for(i = 0; i < COLS; i++) {
        for(j = 0; j < ROWS; j++) {
            printf("%d\t", transpose[i][j]);
        }
        printf("\n");
    }

    return 0;
}
