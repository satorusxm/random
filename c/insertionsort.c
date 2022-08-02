// Insertion Sort


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
// Move the value from an index to other
void move(int *arr, int arrLen, int startInd, int endInd);
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

void move(int *arr, int arrLen, int startInd, int endInd) {
    const int startVal = arr[startInd],
              endVal = arr[endInd];

    if (startInd < endInd) {
        for (int i = startInd + 1; i < endInd; ++i)
            arr[i - 1] = arr[i];
        arr[endInd - 1] = startVal;
    } else if (startInd > endInd) {
        for (int i = startInd -1; i >= endInd; --i)
            arr[i + 1] = arr[i];
        arr[endInd] = startVal;
    }
}

void sort(int *arr, int arrLen) {
    int i = 1,
        j;

    while (i < arrLen) {
        j = i - 1;
        while (j >= 0) {
            if (arr[i] > arr[j]) {
                move(arr, arrLen, i, j + 1);
                break;
            }

            --j;
        }

        // If all the previous elements were larger 
        if (j == -1)
            move(arr, arrLen, i, 0);

        ++i;
    }
}