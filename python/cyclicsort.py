# Cyclic Sort

import random


def sort(arr):
    i = 0
    while (i < len(arr)):
        if arr[i] == i + 1:  # The array is 1 to N
            i += 1
        else:
            val = arr[i]
            arr[i] = arr[val - 1]
            arr[val - 1] = val

n = 100
arr = list(range(1, n + 1))
random.shuffle(arr)
sort(arr)
print(arr)