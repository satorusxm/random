// Is an array sorted

#include <stdio.h>

// Checks if a given array is sorted or not
int isSorted(int *arr, int arrSize, int fromInd);

int main() {
    int arrSize = 10,
        arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    printf("%d\n", isSorted(arr, arrSize, 1));

    return 0;
}

int isSorted(int *arr, int arrSize, int fromInd) {
    if (fromInd >= arrSize) return 1;
    else if (arr[fromInd - 1] > arr[fromInd]) return 0;
    else return isSorted(arr, arrSize, fromInd + 1);
}