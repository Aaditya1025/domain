#include <stdio.h>

void traverseAndDisplay(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = {5, 10, 15, 20, 25};
    int n = sizeof(arr) / sizeof(arr[0]);

    traverseAndDisplay(arr, n);

    return 0;
}
