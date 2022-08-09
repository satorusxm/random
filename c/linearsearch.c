// Linear search using recursion

#include <stdio.h>

// Search for the first appearance of a target in array using linear search through recursion
int search(int *arr, int arrSize, int target, int ind);
// Search for the last appearance of a target in array using linear search through recursion
int searchLast(int *arr, int arrSize, int target, int ind);

int main() {
    int arrSize = 10,
        arr[] = {1, 2, 3, 4, 5, 6, 7, 4, 9, 10},
        target = 4;

    printf("%d\n", search(arr, arrSize, target, 1));
    printf("%d\n", searchLast(arr, arrSize, target, arrSize - 1));

    return 0;
}

int search(int *arr, int arrSize, int target, int ind) {
    if (ind == arrSize) return -1;
    else if (arr[ind] == target) return ind;
    else return search(arr, arrSize, target, ind + 1);
}

int searchLast(int *arr, int arrSize, int target, int ind) {
    if (ind == -1) return -1;
    else if (arr[ind] == target) return ind;
    else return searchLast(arr, arrSize, target, ind - 1);
}