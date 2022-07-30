// Bubble Sort

#include <stdio.h>

// Sorts an array using bubble sort
void sort(int *arr, int arrLen);

int main() {
    int arr[] = {20, 19, 18, 17, 16};

    sort(arr, 5);
    for (int i = 0; i < 5; ++i)
        printf("%d ", arr[i]);
    printf("\n");

    return 0;
}

void sort(int *arr, int arrLen) {
    int sorted = 0,
        step = 1,  // The last index till which we need to iterate decreases every step
        temp;

    while (sorted != 1) {
        sorted = 1;
        for (int i = 0; i < arrLen - step; ++i) {
            if (arr[i] > arr[i + 1]) {
                sorted = 0;
                temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
            }
        }
    }

    return;
}