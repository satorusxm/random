// Cyclic Sort


#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ARR_LEN 10

// Get a random number in given range (upper exclusive) 
int getRandom(int lower, int upper);
// Shuffle an array
void shuffle(int *arr, int arrLen);
// Print array
void printArr(int *arr, int arrLen);
// Sorts an array using insertion sort
void sort(int *arr, int arrLen);

int main() {
    int len = ARR_LEN,
        arr[len];
    
    for (int i = 0; i < len; ++i)
        arr[i] = i;
    
    shuffle(arr, len);
    printArr(arr, len);
    sort(arr, len);
    printArr(arr, len);

    return 0;
}

int getRandom(int lower, int upper) {
    srand(time(0));

    return (rand() % (upper - lower - 1)) + lower;
}

void shuffle(int *arr, int arrLen) {
    int ind, temp;

    for (int i = 0; i < arrLen; ++i) {
        ind = getRandom(0, arrLen);
        temp = arr[i];
        arr[i] = arr[ind];
        arr[ind] = temp;
    }
}

void printArr(int *arr, int arrLen) {
    for (int i = 0; i < arrLen; ++i)
        printf("%d ", arr[i]);
    putchar('\n');
}

void sort(int *arr, int arrLen) {
    int i = 0,
        val,
        temp;

    while (i < arrLen) {
        if (arr[i] == i)  // The array has 0 to arrLen - 1 numbers
            i += 1;
        else {
            val = arr[i];
            arr[i] = arr[val];
            arr[val] = val;
        }
    }
}