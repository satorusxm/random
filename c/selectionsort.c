// Selection Sort

#include <stdio.h>


// Sort an array using selection sort
void sort(int *arr, int arrLen);

int main() {
    int arr[] = {5, 9, 4, 3, 2, 1};

    sort(arr, 6);

    for (int i = 0; i < 6; i++)
        printf("%d ", arr[i]);
    putchar('\n');

    return 0;
}

void sort(int *arr, int arrLen) {
    int maxInd, temp;

    // Repeat steps n - 1 times (worst case)
    for (int i = 0; i < arrLen - 1; ++i) {
        // Find the maximum item in unsorted part of the array
        maxInd = 0; 
        for (int j = 1; j < arrLen - i; ++j) {
            if (arr[j] > arr[maxInd])
                maxInd = j;
        }

        // Replace with last index in unsorted part of the array
        temp = arr[maxInd];
        arr[maxInd] = arr[arrLen - i - 1];
        arr[arrLen - i - 1] = temp;
    }

    return;
}