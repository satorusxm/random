#include <stdio.h>

// Using iteration
int iterative(int arr[], int len, int target);

// Using tail recursion
int tail_recursive(int arr[], int target, int start, int end);

int main() {
    int len = 5;
    int arr[len],
        target = 6;

    for (int i = 1; i <= len; ++i)
        arr[i - 1] = 2 * i;
    
    printf("Iterative > %d\n", iterative(arr, len, target));
    printf("Tail Recursive > %d\n", tail_recursive(arr, target, 0, len - 1));

    return 0;
}

int iterative(int arr[], int len, int target) {
    int start = 0,
        end = len - 1,
        middle,
        elem;
    
    while (start <= end) {
        middle = (start + end) / 2;
        elem = arr[middle];
        
        if (elem == target) return middle;
        else if (elem > target) end = middle - 1;
        else start = middle + 1;
    }

    return -1;
}

int tail_recursive(int arr[], int target, int start, int end) {
    if (start > end) return -1;

    int middle = (start + end) / 2;
    int elem = arr[middle];

    if (elem == target) return middle;
    else if (elem > target) return tail_recursive(arr, target, start, middle - 1);
    else return tail_recursive(arr, target, middle + 1, end);
}