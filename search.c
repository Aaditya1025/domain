#include <stdio.h>

int linearSearch(int arr[], int n, int target) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            return i;
        }
    }
    return -1;
}

int main() {
    int arr[] = {12, 45, 67, 89, 34};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 89;

    int result = linearSearch(arr, n, target);

    if (result != -1) {
        printf("%d\n", result);
    } else {
        printf("-1\n");
    }

    return 0;
}
