// Linear search using recursion

#include <stdio.h>

// Search for a target in array using linear search through recursion
int search(int *arr, int arrSize, int target, int ind);

int main() {
    int arrSize = 10,
        arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10},
        target = 10;

    printf("%d\n", search(arr, arrSize, target, 0));

    return 0;
}

int search(int *arr, int arrSize, int target, int ind) {
    if (ind == arrSize) return -1;
    else if (arr[ind] == target) return ind;
    else return search(arr, arrSize, target, ind + 1);
}