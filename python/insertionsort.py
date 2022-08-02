# Insertion Sort

import random


def sort(arr):
    for i in range(1, len(arr)):
        found = False
        val = arr[i]
        for j in range(i - 1, - 1, -1):
            if val > arr[j]:
                arr.pop(i)
                arr.insert(j + 1, val)
                found = True
                break
        if not found:
            arr.pop(i)
            arr.insert(0, val)

n = 100
a = list(range(1, n + 1))
random.shuffle(a)
sort(a)
print(a)