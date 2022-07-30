# Selection Sort

import random


def sort(arr):
    arrLen = len(arr)

    # Repeat step N - 1 times (worst case scenario)
    for i in range(arrLen - 1):
        unsortedIndex = arrLen - i - 1  # The index till which the array is unsorted (reduces every step)
        maxInd = 0
        # Find the maximum number in unsorted part of the array
        for i in range(1, unsortedIndex + 1):  # +1 to include the index
            if arr[i] > arr[maxInd]: maxInd = i
        
        # Swap maximum number with last index of unsorted part of the array
        arr[maxInd], arr[unsortedIndex] = arr[unsortedIndex], arr[maxInd]

    return

arr = list(range(1000))
random.shuffle(arr)
sort(arr)

print(arr)
