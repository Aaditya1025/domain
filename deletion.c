#include <stdio.h>

int deleteElement(int arr[], int n, int x) {
    int i;
    for (i = 0; i < n; i++) {
        if (arr[i] == x) {
            break;
        }
    }

    if (i < n) {
        n--;
        for (int j = i; j < n; j++) {
            arr[j] = arr[j + 1];
        }
    }

    return n;
}

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 30;

    n = deleteElement(arr, n, x);

    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
